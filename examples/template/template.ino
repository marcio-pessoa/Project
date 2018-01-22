/* template.ino - Template project - Arduino main sketch file
 * 
 * This sketch was developed and tested on: Arduino Uno
 * To work on other Arduino modelds, some adaptations may by necessary.
 */

// Library load
#include <Arduino.h>     /* Arduino - Main library */
#include <SciemonBase.h> /* Sciemon - basic and common definitions */
#include <RealTime.h>    /* Sciemon - Real time library with nice features */

// Version definitions
#define PLATFORM "Template"
#define MARK "I"
#define VERSION "0.00b"
#define VERSION_DATE "AAAA-MM-DD"
#define SERIAL_NUMBER "0000000000000001"
Sciemon project(PLATFORM, MARK, VERSION, VERSION_DATE, SERIAL_NUMBER);

// Serial port speed (bps)
long serial_port_baud_rate = 57600; // 4800, 9600, 14400, 19200, 28800, 38400, 57600, 115200

// OK LED (Status LED)
char* ok_led_name = {"Status LED"};
int ok_led_active = ON;
int ok_led_pin = 13;
int ok_led_period = 500; // Milliseconds
Blinker ok_led(ok_led_pin, ok_led_period);


/* setup
 * 
 */
void setup() {
  // Serial interface
  Serial.begin(serial_port_baud_rate);
  
  // Start up message
  Serial.println(project.information());
}


/* loop
 * 
 */
void loop() {
  ok_led.blink();
}


