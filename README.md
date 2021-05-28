[日本語](README_ja_JP.md)
# ATOM UART Transponder

ATOM UART Transponder on ATOM Lite receives data via UART from a device connected with the HY2.0-4P terminal and transmits them directly to its USB serial.

For example, UnitV2 outputs the recognized results as JSON to the HY2.0-4P terminal via UART, so you can display or process them after receiving them on ATOM Lite.

<a href="https://gyazo.com/cef3a61db121aa842c0369612320c401"><img src="https://i.gyazo.com/cef3a61db121aa842c0369612320c401.jpg" alt="UnitV2 and ATOM Lite are connected with HY2.0-4P cable" width="320"/></a>

The above picture shows that ATOM Lite is attached to the back brick on UnitV2 with LEGO connector pegs. The mount screwed on ATOM Lite comes with [ATOM Mate](https://shop.m5stack.com/products/atom-mate).
## Installation

The program can be compiled on the [PlatformIO](https://platformio.org/) environment.  This software was tested using  [PlatformIO IDE for VSCode](https://platformio.org/install/ide?install=vscode) on Windows 10 environment.

```
$ git clone https://github.com/3110/atom-uart-transponder
$ cd atom-uart-transponder
$ platformio run --target=upload
```

## References

* [UnitV2 recognition service: Serial read](https://docs.m5stack.com/en/quick_start/unitv2/base_functions#serial-read)