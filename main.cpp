#include <Arduino.h>
#include <FastLED.h>

#define LEDS_PER_ROW 156
#define NUM_ROWS 10

#define ROWS_1_AND_2 Heart1
#define ROWS_3_AND_4 Heart2
#define ROWS_5_AND_6 Heart3
#define ROWS_7_AND_8 Heart4
#define ROWS_9_AND_10 Heart5

CRGB Heart1[156]; //= {0xffffff, 0xffffff, 0x351c75, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0x351c75, 0xffffff, 0x351c75, 0xff9b9d, 0xb7e1cd, 0xff9b9d, 0x351c75, 0xffffff, 0xffffff, 0xffffff, 0x9900ff, 0xcc0000, 0xcc0000, 0xcc0000, 0x9900ff, 0xffffff, 0x9900ff, 0xcc0000, 0xcc0000, 0xcc0000, 0x9900ff, 0xffffff, 0xffffff, 0xffffff, 0x351c75, 0xff00ff, 0xff00ff, 0xff00ff, 0x4b0082, 0xffffff, 0x4b0082, 0xff00ff, 0xff00ff, 0xff00ff, 0x4b0082, 0xffffff, 0xffffff, 0xffffff, 0x8a2be2, 0xff4500, 0xff4500, 0xff4500, 0x8a2be2, 0xffffff, 0x8a2be2, 0xff4500, 0xff4500, 0xff4500, 0x8a2be2, 0xffffff, 0xffffff, 0xffffff, 0xe6e6fa, 0xff69b4, 0xff69b4, 0xff69b4, 0xe6e6fa, 0xffffff, 0xe6e6fa, 0xff69b4, 0xff69b4, 0xff69b4, 0xe6e6fa, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff};
CRGB Heart2[156]; //= {0xffffff, 0x351c75, 0xff9b9d, 0xb7b7b7, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0x351c75, 0xffffff, 0x9900ff, 0xcc0000, 0xb7b7b7, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0x9900ff, 0xffffff, 0x4b0082, 0xff00ff, 0xb7b7b7, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xb7e1cd, 0xffffff, 0x8a2be2, 0xff4500, 0xb7b7b7, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0x8a2be2, 0xffffff, 0xe6e6fa, 0xff69b4, 0xb7b7b7, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xe6e6fa, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff};
CRGB Heart3[156]; //= {0xffffff, 0xffffff, 0xffffff, 0x351c75, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0x351c75, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x9900ff, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0xcc0000, 0x9900ff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x4b0082, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0xff00ff, 0x351c75, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x8a2be2, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0xff4500, 0x8a2be2, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xe6e6fa, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xff69b4, 0xe6e6fa, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff};
CRGB Heart4[156]; //= {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x351c75, 0xff9b9d, 0xff9b9d, 0xff9b9d, 0x351c75, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x9900ff, 0xcc0000, 0xcc0000, 0xcc0000, 0x9900ff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x4b0082, 0xff00ff, 0xff00ff, 0xff00ff, 0x4b0082, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x8a2be2, 0xff4500, 0xff4500, 0xff4500, 0x8a2be2, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xe6e6fa, 0xff69b4, 0xff69b4, 0xff69b4, 0xe6e6fa, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff};
CRGB Heart5[156]; //= {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x351c75, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x9900ff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x4b0082, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0x8a2be2, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xe6e6fa, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff};

CRGB leds[NUM_ROWS][LEDS_PER_ROW];

void setup()
{
  // put your setup code here, to run once:
for (int i = 0; i < 156; i++)
{
  Heart1[i] = 0xff0000;
  Heart2[i] = 0xff0000;
  Heart3[i] = 0xff0000;
  Heart4[i] = 0xff0000;
  Heart5[i] = 0xff0000;
}
  // add 5 strips
  FastLED.addLeds<NEOPIXEL, 19>(Heart1, LEDS_PER_ROW);
  FastLED.addLeds<NEOPIXEL, 5>(Heart2, LEDS_PER_ROW);
  FastLED.addLeds<NEOPIXEL, 4>(Heart3, LEDS_PER_ROW);
  FastLED.addLeds<NEOPIXEL, 2>(Heart4, LEDS_PER_ROW);
  FastLED.addLeds<NEOPIXEL, 15>(Heart5, LEDS_PER_ROW);

  // convert strip arrays into 1one 2D array (leds)
  

}

void loop()

{
  // put your main code here, to run repeatedly:

  //turn strips on
  FastLED.show();
}