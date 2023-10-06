#!/bin/bash
if [ $# -eq 3 ]; then
    QPATH=$1
else
    QPATH=$QMAKE_PATH
fi 
echo $QPATH
echo "Build"
echo $QPATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
$QPATH -project "QT += gui widgets multimedia" "LIBS += /usr/local/lib/liblgpio.so"
echo $QPATH GUITesting.pro
$QPATH GUITesting.pro
make
