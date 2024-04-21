#include <FastLED.h>
#define NUM_STRIPS 2
#define NUM_LEDS_PER_STRIP 60
#define NUM_LEDS NUM_LEDS_PER_STRIP * NUM_STRIPS
#define DATA_PIN 7
#define CHIPSET WS2812B
#define BRIGHTNESS 170
#define VOLTS 5
#define MAX_AMPS 500
#define COLOR_ORDER GRB

int switch_pin = A0;
int switch_val = 0;
bool state = false;
int x = 0; //do którego ledu zmienamy wartość
int y = 0; //od jakiego ledu zmienay mawrtość

int switch_pin_2 = A1;
int switch_val_2 = 0;

int min_val = 20;

int pot_Pin_RED = A3;
int pot_Pin_GREEN = A4;
int pot_Pin_BLUE = A5;
int pot_Pin_BRIGHT = A2;

int poten_read_RED = 0;
int poten_read_GREEN = 0;
int poten_read_BLUE = 0;
int poten_read_BRIGHT = 0;

float redVal  = 0;
float greenVal  = 0;
float blueVal = 0 ;
float brightVal = 0;

CRGB leds[NUM_STRIPS * NUM_LEDS_PER_STRIP];
