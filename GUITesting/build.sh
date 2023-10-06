#!/bin/bash
if [$#==1]; then
    QMAKE_PATH = $1
else
    QMAKE_PATH = $QMAKE_PATH
fi 
echo $QMAKE_PATH
echo "Build"
echo $QMAKE_PATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
$QMAKE_PATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
echo $QMAKE_PATH GUITesting.pro
$QMAKE_PATH GUITesting.pro
make
