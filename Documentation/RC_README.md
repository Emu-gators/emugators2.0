# Release Candidate

## Description
The Emugator’s Microcomputer Museum is a project that takes many elements relating to Famicom emulation and integrates them into a seamless and easy to use experience. 

The project consists of a GUI, a fork of the open source NES/Famicom emulator FCEUX, a Zapper-like light gun, configuration files, and a physical eject switch to increase immersion.

For more information, refer to other documentation that can be found in the associated GitHub repository. 


## Links
Video Demonstration: https://www.youtube.com/watch?v=MPcRzeyksHs

GitHub Repository: https://github.com/Emu-gators/emugators2.0

## Building Info

Information on building and using the project can be found in the README.md on GitHub and in the listed documentation that can be found in the Documentation directory.

## Work Completed During Release Candidate Milestone

* Major aesthetic improvements to the project, including new assets and GUI layout.
* Tooltips for the interactive parts of the GUI.
* A toggleable help screen that informs the user how to use the GUI.
* CRT tv functionality.
* Restructuring of the GitHub repo, creation of a Git submodule for the FCEUX fork.
* Preparation for end user testing.
* Initial iteration of IR housings, beginning of Famicom housing design.
* General “cleaning up” of the repo with updates to documentation and the initial README.md.

## List of Bugs:

* Error when using physical switch: very rarely sends the close message too many times, leading to FCEUX failing to interpret the signal correctly. From what has been observed, this error does not crash the program and is fixed when drag and dropping a new game.

* When closing the GUI, FCEUX will close as well, but there are sometimes error/warning messages from FCEUX due to it being shut down improperly in some conditions (this is likely due to how FCEUX’s internal threads work).


* If FCEUX is closed before the GUI (not a normal use case), behavior is fairly erratic. This error could be handled in future versions.
