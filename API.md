# API Reference

## Header files

- [bsp/arduino-nano-esp32.h](#file-bsparduino-nano-esp32h)

## File bsp/arduino-nano-esp32.h

_Arduino Nano ESP32 Board Support Package._

This file provides definitions and functions for the Arduino Nano ESP32 board. Pin definitions are provided using [**PIN\_A0**](#define-pin_a0),[**PIN\_A1**](#define-pin_a1), etc. macros. The[**bsp\_led\_t**](#enum-bsp_led_t) enum defines the LEDs on the board. The[**bsp\_led\_set()**](#function-bsp_led_set) function can be used to turn LEDs on and off. Before using the LEDs, they must be initialized using[**bsp\_leds\_init()**](#function-bsp_leds_init).

## Structures and Types

| Type | Name |
| ---: | :--- |
| enum  | [**bsp\_led\_t**](#enum-bsp_led_t)  <br>_LED pin definitions._ |

## Functions

| Type | Name |
| ---: | :--- |
|  esp\_err\_t | [**bsp\_led\_set**](#function-bsp_led_set) ([**bsp\_led\_t**](#enum-bsp_led_t) led\_io, bool on) <br>_Turn LED on/off._ |
|  esp\_err\_t | [**bsp\_leds\_init**](#function-bsp_leds_init) (void) <br>_Set LEDs' GPIOs as push-pull outputs._ |

## Macros

| Type | Name |
| ---: | :--- |
| define  | [**PIN\_A0**](#define-pin_a0)  GPIO\_NUM\_1<br> |
| define  | [**PIN\_A1**](#define-pin_a1)  GPIO\_NUM\_2<br> |
| define  | [**PIN\_A2**](#define-pin_a2)  GPIO\_NUM\_3<br> |
| define  | [**PIN\_A3**](#define-pin_a3)  GPIO\_NUM\_4<br> |
| define  | [**PIN\_A4**](#define-pin_a4)  GPIO\_NUM\_11<br> |
| define  | [**PIN\_A5**](#define-pin_a5)  GPIO\_NUM\_12<br> |
| define  | [**PIN\_A6**](#define-pin_a6)  GPIO\_NUM\_13<br> |
| define  | [**PIN\_A7**](#define-pin_a7)  GPIO\_NUM\_14<br> |
| define  | [**PIN\_B0**](#define-pin_b0)  GPIO\_NUM\_46<br> |
| define  | [**PIN\_B1**](#define-pin_b1)  GPIO\_NUM\_0<br> |
| define  | [**PIN\_D0**](#define-pin_d0)  [**PIN\_RX0**](#define-pin_rx0)<br> |
| define  | [**PIN\_D1**](#define-pin_d1)  [**PIN\_TX0**](#define-pin_tx0)<br> |
| define  | [**PIN\_D10**](#define-pin_d10)  GPIO\_NUM\_21<br> |
| define  | [**PIN\_D11**](#define-pin_d11)  GPIO\_NUM\_38<br> |
| define  | [**PIN\_D12**](#define-pin_d12)  GPIO\_NUM\_47<br> |
| define  | [**PIN\_D2**](#define-pin_d2)  GPIO\_NUM\_5<br> |
| define  | [**PIN\_D3**](#define-pin_d3)  GPIO\_NUM\_6<br> |
| define  | [**PIN\_D4**](#define-pin_d4)  GPIO\_NUM\_7<br> |
| define  | [**PIN\_D5**](#define-pin_d5)  GPIO\_NUM\_8<br> |
| define  | [**PIN\_D6**](#define-pin_d6)  GPIO\_NUM\_9<br> |
| define  | [**PIN\_D7**](#define-pin_d7)  GPIO\_NUM\_10<br> |
| define  | [**PIN\_D8**](#define-pin_d8)  GPIO\_NUM\_17<br> |
| define  | [**PIN\_D9**](#define-pin_d9)  GPIO\_NUM\_18<br> |
| define  | [**PIN\_RX0**](#define-pin_rx0)  GPIO\_NUM\_44<br> |
| define  | [**PIN\_TX0**](#define-pin_tx0)  GPIO\_NUM\_43<br> |

## Structures and Types Documentation

### enum `bsp_led_t`

_LED pin definitions._
```c
enum bsp_led_t {
    BSP_LED_RED = GPIO_NUM_46,
    BSP_LED_GREEN = GPIO_NUM_0,
    BSP_LED_BLUE = GPIO_NUM_45,
    BSP_LED_YELLOW = GPIO_NUM_48
};
```


## Functions Documentation

### function `bsp_led_set`

_Turn LED on/off._
```c
esp_err_t bsp_led_set (
    bsp_led_t led_io,
    bool on
) 
```


**Parameters:**


* `led_io` Which LED to manipulate (one of BSP\_LED\_\*)
* `on` True to turn LED on, false to turn it off. Note that the polarity of the LED is already taken into account by this function.


**Returns:**



* ESP\_OK Success
* ESP\_ERR\_INVALID\_ARG Parameter error
### function `bsp_leds_init`

_Set LEDs' GPIOs as push-pull outputs._
```c
esp_err_t bsp_leds_init (
    void
) 
```


**Returns:**



* ESP\_OK Success

## Macros Documentation

### define `PIN_A0`

```c
#define PIN_A0 GPIO_NUM_1
```


GPIO labelled as A0
### define `PIN_A1`

```c
#define PIN_A1 GPIO_NUM_2
```


GPIO labelled as A1
### define `PIN_A2`

```c
#define PIN_A2 GPIO_NUM_3
```


GPIO labelled as A2
### define `PIN_A3`

```c
#define PIN_A3 GPIO_NUM_4
```


GPIO labelled as A3
### define `PIN_A4`

```c
#define PIN_A4 GPIO_NUM_11
```


GPIO labelled as A4
### define `PIN_A5`

```c
#define PIN_A5 GPIO_NUM_12
```


GPIO labelled as A5
### define `PIN_A6`

```c
#define PIN_A6 GPIO_NUM_13
```


GPIO labelled as A6
### define `PIN_A7`

```c
#define PIN_A7 GPIO_NUM_14
```


GPIO labelled as A7
### define `PIN_B0`

```c
#define PIN_B0 GPIO_NUM_46
```


GPIO labelled as B0
### define `PIN_B1`

```c
#define PIN_B1 GPIO_NUM_0
```


GPIO labelled as B1
### define `PIN_D0`

```c
#define PIN_D0 PIN_RX0
```


Alias for RX0
### define `PIN_D1`

```c
#define PIN_D1 PIN_TX0
```


Alias for TX0
### define `PIN_D10`

```c
#define PIN_D10 GPIO_NUM_21
```


GPIO labelled as D10
### define `PIN_D11`

```c
#define PIN_D11 GPIO_NUM_38
```


GPIO labelled as D11
### define `PIN_D12`

```c
#define PIN_D12 GPIO_NUM_47
```


GPIO labelled as D12
### define `PIN_D2`

```c
#define PIN_D2 GPIO_NUM_5
```


GPIO labelled as D2
### define `PIN_D3`

```c
#define PIN_D3 GPIO_NUM_6
```


GPIO labelled as D3
### define `PIN_D4`

```c
#define PIN_D4 GPIO_NUM_7
```


GPIO labelled as D4
### define `PIN_D5`

```c
#define PIN_D5 GPIO_NUM_8
```


GPIO labelled as D5
### define `PIN_D6`

```c
#define PIN_D6 GPIO_NUM_9
```


GPIO labelled as D6
### define `PIN_D7`

```c
#define PIN_D7 GPIO_NUM_10
```


GPIO labelled as D7
### define `PIN_D8`

```c
#define PIN_D8 GPIO_NUM_17
```


GPIO labelled as D8
### define `PIN_D9`

```c
#define PIN_D9 GPIO_NUM_18
```


GPIO labelled as D9
### define `PIN_RX0`

```c
#define PIN_RX0 GPIO_NUM_44
```


GPIO labelled as RX0
### define `PIN_TX0`

```c
#define PIN_TX0 GPIO_NUM_43
```


GPIO labelled as TX0

