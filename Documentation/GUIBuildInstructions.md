# GUI Build and Config Instructions

## If running on a new board run these commands first:

### Qt Dependencies
```
sudo apt-get update
sudo apt-get install build-essential
sudo apt-get install qtcreator
sudo apt install qt5-default
sudo apt-get build-dep qtmultimedia5-dev
sudo apt-get install qtmultimedia5-dev
sudo apt-get install libqt5multimedia5-plugins
```

### lggpio Dependencies
```
sudo apt install python3
wget https://github.com/joan2937/lg/archive/master.zip
unzip master.zip
cd lg-master
make
sudo make install
```

## Build Process

### Method 1: build.sh

Navigate into the GUITesting directory: 

```
cd GUITesting
```

Run the build script:

```
./build.sh
```

### Method 2: manually build

Navigate into the GUITesting directory: 

```
cd GUITesting
```

Run qmake with the appropriate arguments for dependencies:

```
qmake -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
qmake GUITesting.pro
```

Build the project:

```
make
```

## Running the GUI

Simply run the generated executable:

```
./GUITesting
```

## Autostart Setup

To get the GUI to run on boot, first create a .desktop file with:
```
nano ~/.config/autostart/GUITest.desktop
```
If the "autostart" directory doesn't exist, make one with: 
```
mkdir ~/.config/autostart
```
Inside the GUITest.desktop file, paste the following with the executable path filled in:
```
[Desktop Entry]
Type=Application
Name=GUITest
Exec={PATH_TO_EXECUTABLE_HERE}
```
After saving the .desktop file in the ~/.config/autostart directory, run this command:
```
sudo reboot
```
This should reboot the system and you should successfully see the program as soon as the boot is complete.
