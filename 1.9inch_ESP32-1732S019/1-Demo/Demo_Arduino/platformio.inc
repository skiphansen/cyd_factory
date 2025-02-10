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
lib_deps =
;    ArduinoJson
;    Wire
;    HTTPClient
;    WiFiClientSecure
;    Adafruit BusIO


[base:esp32]
lib_extra_dirs = 
        ../../Libraries
        ../libraries
platform = espressif32
framework = ${common.framework}
lib_deps = ${common.lib_deps}

[env:1732S019]
board = esp32-s3-devkitc-1
extends = base:esp32

