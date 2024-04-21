
void setup() {
  pinMode(pot_Pin_RED, INPUT);
  Serial.begin(9600);
  
  FastLED.addLeds<NEOPIXEL, 6>(leds, 0, NUM_LEDS_PER_STRIP);
  FastLED.addLeds<NEOPIXEL, 7>(leds, NUM_LEDS_PER_STRIP, NUM_LEDS_PER_STRIP);

  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show(); //sprawdza czy działa


  pinMode(switch_pin,INPUT);
  digitalWrite(switch_pin, HIGH);
  pinMode(switch_pin_2,INPUT);
  digitalWrite(switch_pin_2, HIGH);


}
