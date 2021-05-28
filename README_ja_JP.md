[In English](README.md)

# ATOM UART Transponder

ATOM UART TransponderはATOM LiteのHY2.0-4P端子に接続されたデバイスからUARTでデータを受信し，そのままUSBシリアルに送信します。

例えば，[UnitV2](https://shop.m5stack.com/products/unitv2-ai-camera-gc2145)は認識した内容をJSONでHY2.0-4Pに出力するので，それを受けとって表示したり，さらに処理を加えたりすることができます。

<a href="https://gyazo.com/cef3a61db121aa842c0369612320c401"><img src="https://i.gyazo.com/cef3a61db121aa842c0369612320c401.jpg" alt="UnitV2 and ATOM Lite are connected with HY2.0-4P cable" width="320"/></a>

## インストール

[PlatformIO](https://platformio.org/)環境に対応しています。動作確認は Windows 10 上で[PlatformIO IDE for VSCode](https://platformio.org/install/ide?install=vscode)を使用して実施しています。

```
$ git clone https://github.com/3110/atom-uart-transponder
$ cd atom-uart-transponder
$ platformio run --target=upload
```

## 参考

* [UnitV2 recognition service: Serial read](https://docs.m5stack.com/en/quick_start/unitv2/base_functions#serial-read)