/* FCE Ultra - NES/Famicom Emulator
 *
 * Copyright notice for this file:
 *  Copyright (C) 2020 mjbudd77
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

//Socket code includes
//This client file utilizes code from https://www.geeksforgeeks.org/socket-programming-cc/

// Client side C/C++ program to demonstrate Socket
// programming
#include <arpa/inet.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080 

#include <stdio.h>
#include <stdlib.h>
#include <QApplication>
#include <QSplashScreen>
#include <QSettings>
#include <QDirIterator>
//#include <QProxyStyle>

#include "Qt/ConsoleWindow.h"
#include "Qt/fceuWrapper.h"
#include "Qt/SplashScreen.h"

#ifdef WIN32
#include <QtPlatformHeaders/QWindowsWindowFunctions>
#endif

#include <thread>
#include <cstring>

consoleWin_t *consoleWindow = NULL;
int client_fd;
char buffer[1024] = { 0 };

void set_rom(){
	int valread = 1;
	while(valread != 0){
		valread = read(client_fd, buffer, 1024);
		//Load game using input ROM path from GUI
		QString rom_path = buffer;
		printf("%s\n", rom_path);
		if(rom_path == "close"){
			printf("In close path\n");
			consoleWindow->emulatorThread->signalROMClose();
		}else{
			consoleWindow->emulatorThread->signalRomLoad(buffer);
		}
		
		std::memset(buffer, 0, 1024);
	}
	// closing the connected socket
	::close(client_fd);
}

static void MessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    const char *file = context.file ? context.file : "";
    const char *function = context.function ? context.function : "";
    char cmsg[2048];
    switch (type) 
    {
       case QtDebugMsg:
           sprintf( cmsg, "Qt Debug: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	   FCEUD_Message(cmsg);
           break;
       case QtInfoMsg:
           sprintf( cmsg, "Qt Info: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	   FCEUD_Message(cmsg);
           break;
       case QtWarningMsg:
           sprintf( cmsg, "Qt Warning: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	   FCEUD_Message(cmsg);
           break;
       case QtCriticalMsg:
           sprintf( cmsg, "Qt Critical: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	   FCEUD_PrintError(cmsg);
           break;
       case QtFatalMsg:
           sprintf( cmsg, "Qt Fatal: %s (%s:%u, %s)\n", localMsg.constData(), file, context.line, function);
	   FCEUD_PrintError(cmsg);
           break;
    }
    fprintf(stderr, "%s", cmsg );
}


// This custom menu style wrapper used to prevent the menu bar from permanently stealing window focus when the ALT key is pressed.
//class MenuStyle : public QProxyStyle
//{
//public:
//    int styleHint(StyleHint stylehint, const QStyleOption *opt, const QWidget *widget, QStyleHintReturn *returnData) const
//    {
//        if (stylehint == QStyle::SH_MenuBar_AltKeyNavigation)
//            return 0;
//
//        return QProxyStyle::styleHint(stylehint, opt, widget, returnData);
//    }
//};


#undef main   // undef main in case SDL_Main

static bool showSplashScreen(void)
{
	bool show = false;
	QSettings  settings;

	show = settings.value("mainWindow/showSplashScreen", false).toBool();

	return show;
}

int main( int argc, char *argv[] )
{
	printf("Start of FCEUX QT Main \n");

	int retval = 0;

	fceuWrapperPreInit(argc, argv);

	qInstallMessageHandler(MessageOutput);
	QApplication app(argc, argv);

	QCoreApplication::setOrganizationName("TasEmulators");
	QCoreApplication::setOrganizationDomain("TasEmulators.org");
	QCoreApplication::setApplicationName("fceux");

	fceuSplashScreen *splash = NULL;
	
	if ( showSplashScreen() )
	{
		splash = new fceuSplashScreen();
		splash->show();
		app.processEvents();
	}

	#ifdef WIN32
	if (AttachConsole(ATTACH_PARENT_PROCESS))
	{
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);
	}
	#endif
	//app.setStyle( new MenuStyle() );

	//styleSheetEnv = ::getenv("FCEUX_QT_STYLESHEET");
	//
	//if ( styleSheetEnv != NULL )
	//{
	//   QFile File(styleSheetEnv);
	//
	//   if ( File.open(QFile::ReadOnly) )
	//   {
	//      QString StyleSheet = QLatin1String(File.readAll());
	//
	//      app.setStyleSheet(StyleSheet);
	//
	//      printf("Using Qt Stylesheet file '%s'\n", styleSheetEnv );
	//   }
	//   else
	//   {
	//      printf("Warning: Could not open Qt Stylesheet file '%s'\n", styleSheetEnv );
	//   }
	//}

	fceuWrapperInit( argc, argv );

	consoleWindow = new consoleWin_t();

	consoleWindow->show();

	//Socket code specifed below was based on an example from "www.geeksforgekks.org/socket-programming-cc/"
	printf("Beginning of Client Socket code\n");
	//Socket Client Code
	int status, valread;
	struct sockaddr_in serv_addr;
	char* hello = "Hello from client";

	if ((client_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
		printf("\n Socket creation error \n");
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);

	// Convert IPv4 and IPv6 addresses from text to binary
	// form
	if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)
		<= 0) {
		printf(
			"\nInvalid address/ Address not supported \n");
	}

	if ((status
		= ::connect(client_fd, (struct sockaddr*)&serv_addr,
				sizeof(serv_addr)))
		< 0) {
		printf("\nConnection Failed \n");
	}
	send(client_fd, hello, strlen(hello), 0);
	printf("Hello message sent\n");
	valread = read(client_fd, buffer, 1024);
	printf("%s\n", buffer);
	//TODO: Clear buffer between each loaded game/message
	//read in ROM path of loaded game
    //End of client code

	std::thread socket_thread(set_rom);
    printf("End of Client Socket code\n");

	// Need to wait for window to initialize before video init can be called.
	//consoleWindow->videoInit();

#ifdef WIN32
	// This function is needed to fix the issue referenced below. It adds a 1-pixel border
	// around the fullscreen window due to some limitation in windows.
	// https://doc.qt.io/qt-5/windows-issues.html#fullscreen-opengl-based-windows
	QWindowsWindowFunctions::setHasBorderInFullScreen( consoleWindow->windowHandle(), true);
#endif

	if ( splash )
	{
		splash->finish( consoleWindow );
		//delete splash; this is handled by Qt event loop
	}

	retval = app.exec();

	//printf("App Return: %i \n", retval );

	delete consoleWindow;

	fceuWrapperMemoryCleanup();

	return retval;
}

