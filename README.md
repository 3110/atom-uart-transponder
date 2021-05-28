[日本語](README_ja_JP.md)
# ATOM UART Transponder

ATOM UART Transponder on ATOM Lite receives data via UART from a device connected with the HY2.0-4P terminal and transmits them directly to its USB serial.

For example, UnitV2 outputs the recognized results as JSON to the HY2.0-4P terminal via UART, so you can display or process them after receiving them.

[![UnitV2 and ATOM Lite are connected with HY2.0-4P cable](https://i.gyazo.com/cef3a61db121aa842c0369612320c401.jpg)](https://gyazo.com/cef3a61db121aa842c0369612320c401)

## Installation

The program can be compiled on the [PlatformIO](https://platformio.org/) environment.  The test of this software was performed using  [PlatformIO IDE for VSCode](https://platformio.org/install/ide?install=vscode) on Windows 10 environment.

$ git clone https://github.com/3110/atom-uart-transponder
$ cd atom-uart-transponder
$ platformio run --target=upload

## References

* [UnitV2 recognition service: Serial read](https://docs.m5stack.com/en/quick_start/unitv2/base_functions#serial-read)