# emugators2.0
Continuation of work done by original EmuGators, building on their use of FCEUX to emulate the Famicom system.

## Work Completed
### Design Prototype

Rudolph Civil -In my role, I was responsible for developing the connection between the GUI and FCEUX, and I was able to achieve this by leveraging the QT command line interface. Through extensive research, I delved deeply into the nuances of various operating systems and how using the terminal could impact the GUI when loading ROMs through command lines.

I discovered that different operating systems require different commands for executing tasks such as loading ROMs, with the "open" command being used specifically for MAC OS and different commands used for Linux. I took charge of this task and worked tirelessly to ensure that the ROMs were properly loaded into FCEUX, which required me to use an argument in the command line. I was able to find this crucial information in the FCEUX documentation and the team effectively incorporate it into our system.

Overall, my efforts helped to ensure a seamless integration between the GUI and FCEUX, resulting in a streamlined user experience for our users.

Fatima Elfasi - 

Zachary Thrasher - Extenuating circumstances.

Christian Walk - 

### Known Bugs/Issues
1) The drag and drop feature is currently configured to work when the GUI window is aligned at the top left corner of the screen. This is related to the pixel mapping being global and should be fixed to being mapped relative to the GUI window instead.

2) When a game is dragged and dropped into the system, the next ROM cart image is loaded, however the previous ROM's address is still associated with it until you press the next or previous buttons. This can be rectified through a check loop in the code. We can also implement a class object that associates the ROM cartridge images with their respective ROM files.

##
### Pre-Alpha Build
Rudolph Civil - I tried to run the on MAC M1 chip, I ran into some issues, so i will be putting this set up on pause until further notice. I joined the Team's task to get it up and running on Linux to help result some issues. I Downloaded Virtual box and used Debian Linux OS and attempted to set up the emulator. I Cloned and tried to build previous teams's repo on my linux system. Ran into same QT GUI issues that Chritian is working on solving. 

Fatima Elfasi - Cloned and built previous team's efforts on local machine and worked on getting demo LUA script to work and ensured that ROMs and ROM cartidge images load too. Worked with Christian to build fceux emulator on Renegade board. Worked on clarifying build documentation based on snags we hit and how we worked around it. Arranged meeting for Emugators Supergroup (both teams) to show us the structure of their code-base and how to run their project. Worked on aesthetic choices and made mockups which inspired our new GUI.

Zachary Thrasher - Extenuating circumstances.

Christian Walk - Built previous team's progress on local machine with emugator_demo.lua script working properly. Research Qt libraries in C++ and started creating the interface based on the mockup in the design revision with the ROM images(image in pre-alpha documentation) currently not connected to FCEUX. Got board setup with Raspbian and worked with Fatima to get fceux emulator running with emugator_demo on the board(current lua script still not displaying due to dependency issue).

## Next Steps
Rudolph Civil - I will be doing further reaserch on the QT GUI with Chritian. On my spare time, I will also be working on the Mac M1 chip to run this. Working on creating a schedule where we would work together on the project, in order for us to be on the same page with this build process. 

Fatima Elfasi - Research methods for implementing SNES emulation using either Snes9x or bsnes. Support with implementing smooth communication between GUI and emulator.

Zachary Thrasher - Zapper/Building on Renegade board other modular sections/alternative work to be determined.

Christian Walk - Running the stand alone GUI on the board/finishing design to look like mock up. Determining/implementing communication method to connect with FCEUX emulator.
