#pragma once

#include "monorule.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"

#ifdef PROTOCOL_LUFA
    #include "lufa.h"
    #include "split_util.h"
#endif

#ifdef SSD1306OLED
    #include "ssd1306.h"
#endif

#ifdef USE_I2C
    #include <stddef.h>
    #ifdef __AVR__
        #include <avr/interrupt.h>
        #include <avr/io.h>
    #endif
#endif

#define LAYOUT(L00, L01, L02, L03, L04,  R00, R01, R02, R03, R04) \
{ \
  { L00, L01, L02, L03, L04 }, \
  { R04, R03, R02, R01, R00 }, \
}
