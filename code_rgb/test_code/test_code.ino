/*  TU MUNDO MAKER  */

#include <FastLED.h>
#define CLOCK_PIN   A0
#define DATA_PIN    A1
#define NUM_LEDS    1
CRGB leds[NUM_LEDS];

#define PinSensor 7
int t = 1000;

void RGB_01(int t){
  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(i,0,0); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(i,0,0); 
    FastLED.show();
    delay(t/(14*128));  
  }
  
  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(0,i,0); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(0,i,0); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(0,0,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(0,0,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(i,i,0); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(i,i,0); 
    FastLED.show();
    delay(t/(14*128));  
  }
  
  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(0,i,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(0,i,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(i,0,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(i,0,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 0; i <= 128;i++){
    leds[0] = CRGB(i,i,i); 
    FastLED.show();
    delay(t/(14*128));  
  }

  for (int i = 128; i >= 0;i--){
    leds[0] = CRGB(i,i,i); 
    FastLED.show();
    delay(t/(14*128));  
  }
}

void setup() {
  FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  pinMode(PinSensor, INPUT_PULLUP);
}

void loop() {

  leds[0] = CRGB(0,0,0); 
  FastLED.show();
  delay(50);   

  if(digitalRead(PinSensor) == HIGH){
    RGB_01(5000);
  }
} 



