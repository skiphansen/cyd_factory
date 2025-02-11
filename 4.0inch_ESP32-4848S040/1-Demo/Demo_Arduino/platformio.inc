; PlatformIO Project Configuration File
;
;   Build options: build flags, source filter
;   Upload options: custom upload port, speed and extra flags
;   Library options: dependencies, extra library storages
;   Advanced options: extra scripting
;
; Please visit documentation for the other options and examples
; https://docs.platformio.org/page/projectconf.html

[common]
framework = arduino
monitor_speed = 115200
board = esp32-s3-devkitc-1

[base:esp32]
lib_extra_dirs = 
        ../../Libraries
        ../libraries
platform = espressif32
framework = ${common.framework}
lib_deps = ${project.lib_deps}

[env:1732S019]
board = esp32-s3-devkitc-1
extends = base:esp32

[env:4848S040]
extends = base:esp32
board = esp32-s3-devkitc-1
board_build.partitions = ../../../Operating instructions/huge_app.csv
board_build.flash_mode=qio
board_build.arduino.memory_type = qio_opi
board_build.psram_type=qspi_opi
board_upload.maximum_size = 16777216
board_upload.maximum_ram_size = 327680
board_upload.flash_size = 16MB

