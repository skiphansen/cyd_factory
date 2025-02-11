#!/bin/sh

VPJ_FILE=../../../vs/switch86_lvgl_music.vpj

dot_d_2vs.sh ${VPJ_FILE} .pio
#cat ${VPJ_FILE} | sed -e 's!/src/src/!/src/!'g > e.xml
#mv e.xml ${VPJ_FILE}

