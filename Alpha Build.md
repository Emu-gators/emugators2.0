# Alpha Build

Github Repository Link: https://github.com/Emu-gators/emugators2.0

======================================================================

## Usability

GUI is implemented and functional, with the ability to navigate through the various ROMs, the ability to drag and drop to load a chosen rom, and the ability to open a new window (that will later be filled with various functions for debugging and configuring). The buttons for choosing a ROM are clearly labeled (previous/next) and the drag and drop feature intuitively emulates the real world insertion of a cartridge. No major bugs or issues are currently known that inhibit usability in the standard use case (booting up the board, choosing a game, and playing it).

##Build Quality
The GUI correctly loads the ROMs and allows the accurate emulation of the current game library. The GUI has a couple of different elements (previous, next, debug) and images (ROM images and the Famicom console) that all function appropriately, with no known crashes or glitches.  A game can be successfully loaded when a user drags and drops the ROM image from the shelf to the image representing the console.

Currently the GUI launches in a maximized window state to allow ease of testing, but with one line changed in the code it can be reconfigured to launch in full screen to better suit the museum aesthetic. 

The zapper functions properly, allowing full control of a mouse cursor once plugged in.The one current caveat is that it can’t be plugged into the board at the same time as another mouse. 

## Vertical Features

### External Interface

A light gun was built for use in the microcomputer museum, which has an itsybitsy microcontroller which connects to the renegade board (ROC-RK3328 ) through usb. The microcontroller has a dfrobot camera attached to it, which it uses to detect 4 IR LEDs. 

The GUI application provides an aesthetic display of the various game ROMs that are available to play on the FCEUX emulator of the Nintendo Famicom. A user can drag ROMs from the top of the screen onto the image of the Famicom to load a ROM into the FCEUX emulator. 

Code files of note that populate the GUI application
emugators2.0/GUITesting/main.cpp
emugators2.0/GUITesting/mainwindow.cpp
emugators2.0/GUITesting/mainwindow.h
emugators2.0/GUITesting/mainwindow.ui (utilized by qt designer/qt creator for laying out visual elements)

The emulator is currently configured to launch with the NTSC palette and the NTSC 2x filter applied, which applies a color palette and overlay made to mimic the look of an NTSC version of the Famicom/NES system on a CRT television. In the interest of providing a more historically accurate experience, we plan to experiment with code that manipulates the pixels and shading to more closely resemble the aesthetic of the original hardware. 

Other secondary elements are explored and elaborated upon in the following file which includes proofs of concept and mockups for these elements:
https://github.com/Emu-gators/emugators2.0/blob/main/Filter%20Research%20%2B%20Proof%20of%20Concept.docx


### Persistent State

The light gun stores calibration data, the coordinate locations for the corners of the monitor, on its microcontroller. This data is later used for the calculation to determine where the gun is pointing.
 For the GUI application to properly load/use all of the visual and game files(Images, ROM images, and ROMs), they need to all be stored in the proper directory. Currently our file paths are based on how they are stored in the board, specified below.
ROMs, ROM images, and GUI image location:
ROMs: /home/emugators/Documents/ROMs/emugator.ROMs/
ROM images: /home/emugators/Documents/ROMs/emugator/ROM_Carts/
GUI Images: /home/emugators/Documents/ROMs/

You are welcome to use different file paths when running on your own machine but be sure to get a copy of these files as well as update the paths should you put them in a different directory than the ones listed above.

### Internal Systems

The light gun runs an algorithm using the IR locations, which are updated in real time, along with the stored calibration data to determine the current position of the gun’s line of sight. The spot on the screen where the gun is currently pointing is then sent to the board as the positional data for the mouse cursor.

The GUI and FCEUX (emulator) are connected successfully via socket programming. This ensures persistent communications between the two elements. For verification of this connection you can drag and drop a game in the GUI program and it should load the corresponding game into FCEUX to be played by the user. Proof of the socket communication can be seen in the console window if you run the GUI program through the command line(see GUIBuildInstructions.txt in the repository for more information about running the application from the command line).

Special code lines of note
Socket code in GUI: emugators2.0/GUITesting/mainwindow.cpp: 64-121 & 349 
Socket code in FCEUX: emugators2.0/src/drivers/Qt/main.cpp: 55-67 & 189-218
Note about socket code, the client/server socket code was modified from an example in [1] The original client.c and server.c are also still a part of the repo as they are still being used for testing and development.

## Sources

[1] https://www.geeksforgeeks.org/socket-programming-cc/
