# Arduino Nano ESP32 Board Support Package for ESP-IDF

[![Component Registry](https://components.espressif.com/components/igrr/arduino-nano-esp32/badge.svg)](https://components.espressif.com/components/igrr/arduino-nano-esp32)

This repository contains an ESP-IDF board support package for Arduino [Nano ESP32](https://docs.arduino.cc/hardware/nano-esp32) board. This board is based on an [ESP32-S3](https://www.espressif.com/en/products/socs/esp32-s3) chip.

## Using the component

If you have an existing ESP-IDF project you can run the following command to install the component:
```bash
idf.py add-dependency "igrr/arduino-nano-esp32"
```

## Example

This component includes the `blink` example. It can be used as a starting point when developing an application on Nano ESP32 board. Aside from the obligatory blinking of LEDs, the example also contains default configuration (`sdkconfig.defaults`) for this board, setting up Flash, PSRAM and console output over USB.

```bash
idf.py create-project-from-example "igrr/arduino-nano-esp32:blink"
```

Then build as usual:
```bash
cd blink
idf.py build
```

And flash it to the board:
```bash
idf.py -p PORT flash monitor
```

LEDs should cycle between red, green, blue and yellow. On the console, you should see:
```
I (726) example: Hello from Arduino Nano ESP32 board!
I (726) example: Free heap: 8738808 bytes
```

## License

This component is provided under Apache 2.0 license, see [LICENSE](LICENSE.md) file for details.
