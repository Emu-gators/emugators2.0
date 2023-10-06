#!/bin/bash

echo "Build"
echo $QMAKE_PATH
echo $QMAKE_PATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
$QMAKE_PATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
echo $QMAKE_PATH GUITesting.pro
$QMAKE_PATH GUITesting.pro
make
