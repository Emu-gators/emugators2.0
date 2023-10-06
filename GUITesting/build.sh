#!/bin/bash
echo "Build"
$QMAKE_PATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
$QMAKE_PATH GUITesting.pro
make
