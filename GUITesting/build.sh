#!/bin/bash
echo "Build"
echo qmake -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
qmake -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
echo qmake GUITesting.pro
qmake GUITesting.pro
make