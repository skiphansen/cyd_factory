#! /usr/bin/sh

#set -x

demos='3_3-1_TFT_HelloWorld/HelloWorld 3_3-4_TFT-LVGL-Widgets/LvglWidgets 3_3-2_TFT-CLOCK/Clock 3_3-3-TFT-LVGL-Benchmark/LvglBenchmark'

for demo in $demos; do
    echo "Building $demo"
     
    (cd $demo;rm -rf .pio;pio run 2>&1 > build.log) 2>&1 > /dev/null
    if [ $? -ne 0 ]; then
        echo "Build failed"
        return 1
    fi
done

