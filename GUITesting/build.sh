#!/bin/bash
echo "Build"
qmake -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
qmake GUITesting.pro
make
