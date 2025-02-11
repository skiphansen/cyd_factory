#! /usr/bin/sh

#set -x

boards='1.9inch_ESP32-1732S019/1-Demo/Demo_Arduino 4.0inch_ESP32-4848S040/1-Demo/Demo_Arduino'

for board in $boards; do
    echo "Building Demos in $board"
     
    (cd $board;./build_all.sh)
done

