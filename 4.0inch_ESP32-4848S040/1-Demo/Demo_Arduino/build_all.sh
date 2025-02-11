#! /usr/bin/sh

#set -x

demos='1_1_86switch_onoff/86switch_onoff 1_3_switch86_lvgl_music/switch86_lvgl_music'

for demo in $demos; do
    echo "Building $demo"
     
    (cd $demo;rm -rf .pio;pio run 2>&1 > build.log) 2>&1 > /dev/null
    if [ $? -ne 0 ]; then
        echo "Build failed"
        return 1
    fi
done

