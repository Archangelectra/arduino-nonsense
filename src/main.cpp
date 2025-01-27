/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

// defines the setup for pins and etc?
void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// repeats whats assigned to be done here over and over again
void loop()
{
  // turn the LED on (HIGH is the voltage level, meaning 1)
  digitalWrite(LED_BUILTIN, HIGH);

  // wait for a second
  delay(1000);

  // turn the LED off by making the voltage LOW (0)
  digitalWrite(LED_BUILTIN, LOW);

   // wait for a second
  delay(1000);

}