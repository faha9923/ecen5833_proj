/**
 * gpio.h
 */

#ifndef SRC_GPIO_H_
#define SRC_GPIO_H_

#include <stdbool.h>
#include "em_gpio.h"
#include <string.h>


// Student Edit: Define these, 0's are placeholder values.
// See the radio board user guide at https://www.silabs.com/documents/login/user-guides/ug279-brd4104a-user-guide.pdf
// and GPIO documentation at https://siliconlabs.github.io/Gecko_SDK_Doc/efm32g/html/group__GPIO.html
// to determine the correct values for these.

/* LED Peripheral */
#define LED_port         gpioPortA
#define LED_LEFT_PIN     2
#define LED_UP_PIN       3
#define LED_RIGHT_PIN    4
#define LED_BOTTOM_PIN   5
//#define LED0_port         gpioPortF
//#define LED0_pin          4
//#define LED1_port         gpioPortF
//#define LED1_pin          5

/* I2C0 Peripheral */
#define I2C0_PORT         gpioPortC
#define I2C0_SCL_PIN      10
#define I2C0_SDA_PIN      11

/* Distance Sensor VL53L0x */
#define VL53L0X_GPIO_PORT   gpioPortD
//#define VL53L0X_XSHUT_PIN   11        // Power control, EXP9
#define VL53L0X_GPIO1_PIN   11        // Interrupt

/* Color & Gesture Sensor Apds9960 */
//#define APDS9960_GPIO_PORT  gpioPortD
//#define APDS9960_INT_PIN    12        // Interrupt
#define APDS9960_GPIO_PORT  gpioPortF
#define APDS9960_INT_PIN    7        // Interrupt

// Function prototypes
void gpioInit();

/* GPIO Write */
//void gpioLed0SetOn();
//void gpioLed0SetOff();
/**
 * led_id - use "DIR_UP", "DIR_DOWN", "DIR_LEFT", "DIR_RIGHT"
 * */
void gpioGestureLedSet(uint8_t led_id, bool on);

void gpioVL53SetOn();
void gpioVL53SetOff();



#endif /* SRC_GPIO_H_ */
