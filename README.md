# Emugators 2.0

**A project for the Microcomputer Musuem. Features a GUI that operates alongside FCEUX ([an open source NES emulator](https://github.com/TASEmulators/fceux)).**

## Directory Structure

* ### Documentation
    - Contains documentation related to the project including build instructions for FCEUX and the GUI.
* ### GUITesting
    - Main directory that relates to the GUI. Contains source code and scripts for building the GUI. 
    - The executable for the GUI will be created here by default.
* ### emugatorsfceux
    - A Git submodule that contains a fork of FCEUX. On GitHub, you can click this directory to go to the emugatorsfceux GitHub repository.

## Build

The project currently supports a Linux build.

The build process requires two steps.

* First, build FCEUX according to the steps outlined in BuildInstructions.md that can be found in the Documentation folder.
* Second, build the GUI by executing the build.sh script in the GUITesting folder.

## GUI

The GUI can be launched by executing the GUITesting executable found in the GUITesting folder.

To play games, drag and drop the cartridges near the top of the screen onto the Famicom near the center of the GUI. 

To scroll through the available games, use the "Next" and "Previous" buttons to the sides of the current cartridge.

To help calibrate the Zapper, you can press the "Calibrate" button to bring up a calibration screen.

More information about the GUI can be found in the GUITesting folder.

## FCEUX

This project uses a modified version of FCEUX which uses sockets for interprocess communication.

FCEUX was initially forked from https://github.com/TASEmulators/fceux , and [the modified fork](https://github.com/Emu-gators/emugatorsfceux) exists as a Git submodule for this project.

## Group Members
Jeya Iyadurai

Christian Walk

Zachary Thrasher

Fatima Elfasi
