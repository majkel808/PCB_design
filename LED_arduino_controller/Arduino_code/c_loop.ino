void loop() {
  switch_val = !digitalRead(switch_pin);
  switch_val_2= !digitalRead(switch_pin_2);
    
     if(switch_val == 1 && state == false){
     FastLED.setBrightness(brightVal);
     state = true;
     delay(300);
     FastLED.show();
     
  }

    else if(switch_val == 1 && state == true){
    
    state = false;
    delay(300);
    }


if(!switch_val_2){
    x = NUM_LEDS_PER_STRIP;
    y = 0;
     
  }
    else if(switch_val_2){
    x = NUM_LEDS;
    y = NUM_LEDS_PER_STRIP;
    }

if(state == true){ 
 poten_read_RED = analogRead(pot_Pin_RED);
  poten_read_GREEN = analogRead(pot_Pin_GREEN);
  poten_read_BLUE = analogRead(pot_Pin_BLUE);
  poten_read_BRIGHT = analogRead(pot_Pin_BRIGHT);
    
  redVal = int(poten_read_RED/4);
  greenVal = int(poten_read_GREEN/4);
  blueVal = int(poten_read_BLUE/4);
  brightVal = int(poten_read_BRIGHT/4);
  
  Serial.println(redVal);
  
  if(brightVal < min_val) brightVal = 0;
  if(brightVal > BRIGHTNESS) brightVal = BRIGHTNESS;
  if(redVal < min_val) redVal = 0;
  if(greenVal < min_val) greenVal = 0;
  if(blueVal < min_val) blueVal = 0;
  
 FastLED.setBrightness(brightVal);
 
  for(int i =  y; i < x; i++){
    leds[i].red = redVal;
    leds[i].green = greenVal;
    leds[i].blue = blueVal;
  }
  
  FastLED.show();
}

else {
  FastLED.setBrightness(0);
    FastLED.show();
  }


  
 

}
