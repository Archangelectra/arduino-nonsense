#include <TM1637Display.h>

// DEFINITIONS //
#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

#ifndef CLK
#define CLK 2
#endif

#ifndef DT
#define DT 3
#endif

#ifndef SW
#define SW 4
#endif

#ifndef DIO
#define DIO 5
#endif
// DISPLAY STUFF //

// Create a display object of type TM1637Display
TM1637Display display = TM1637Display(CLK, DIO);

// Create an array that turns all segments ON
const uint8_t allON[] = {0xff, 0xff, 0xff, 0xff};

// Create an array that turns all segments OFF
const uint8_t allOFF[] = {0x00, 0x00, 0x00, 0x00};

// creates an array for turning the center lines on only
const uint8_t lines[] = {
    SEG_G,
    SEG_G,
    SEG_G,
    SEG_G
}