/*  TU MUNDO MAKER  */

#include <FastLED.h>
#define CLOCK_PIN   A0
#define DATA_PIN    A1
#define NUM_LEDS    1
#define PinSensor   2
CRGB leds[NUM_LEDS];

int address = 8;
bool secuencia = false;

void RGB_RuidoBlanco(){
  //0:00 - 0:05
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(0,0,0);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(0,0,0);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(0,0,0);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(0,0,0);}
  FastLED.show();   delay(5000);

  //0:05 - 0:10
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(0,0,0);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(0,0,0);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(0,0,0);}
  FastLED.show();   delay(5000);
  //0:10 - 0:14
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(0,0,0);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(0,0,0);}
  FastLED.show();   delay(4000);

  //0:14 - 0:16
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(0,0,0);}
  FastLED.show();   delay(2000);

  //0:16 - 0:17
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(255,255,255);}
  FastLED.show();   delay(1000);

  //0:17 - 0:18
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(255,255,255);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(255,255,255);}
  FastLED.show();   delay(1000);

  //0:18 - 0:20
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(255,255,255);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(255,255,255);}
  if(address == 8){  leds[0] = CRGB(255,255,255);}
  FastLED.show();   delay(2000);

  //0:20 - 0:23
  if(address == 1){  leds[0] = CRGB(255,255,255);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(255,255,255);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(255,255,255);}
  if(address == 8){  leds[0] = CRGB(255,255,255);}
  FastLED.show();   delay(3000);

  //0:23 - 0:28
  if(address == 1){  leds[0] = CRGB(255,255,255);}
  if(address == 2){  leds[0] = CRGB(255,255,255);}
  if(address == 3){  leds[0] = CRGB(255,255,255);}
  if(address == 4){  leds[0] = CRGB(255,255,255);}
  if(address == 5){  leds[0] = CRGB(255,255,255);}
  if(address == 6){  leds[0] = CRGB(255,255,255);}
  if(address == 7){  leds[0] = CRGB(255,255,255);}
  if(address == 8){  leds[0] = CRGB(255,255,255);}
  FastLED.show();   delay(5000);

  //0:28 - 0:30
  if(address == 1){  leds[0] = CRGB(0,0,0);}
  if(address == 2){  leds[0] = CRGB(0,0,0);}
  if(address == 3){  leds[0] = CRGB(0,0,0);}
  if(address == 4){  leds[0] = CRGB(0,0,0);}
  if(address == 5){  leds[0] = CRGB(0,0,0);}
  if(address == 6){  leds[0] = CRGB(0,0,0);}
  if(address == 7){  leds[0] = CRGB(0,0,0);}
  if(address == 8){  leds[0] = CRGB(0,0,0);}
  FastLED.show();   delay(2000);

  //0:30 - 0:40
  for(int i=0; i<=250;i++){
    if(address == 1){  leds[0] = CRGB(255,255,255);}
    if(address == 2){  leds[0] = CRGB(0,0,0);}
    if(address == 3){  leds[0] = CRGB(255,255,255);}
    if(address == 4){  leds[0] = CRGB(0,0,0);}
    if(address == 5){  leds[0] = CRGB(255,255,255);}
    if(address == 6){  leds[0] = CRGB(0,0,0);}
    if(address == 7){  leds[0] = CRGB(255,255,255);}
    if(address == 8){  leds[0] = CRGB(0,0,0);}
    FastLED.show();   delay(20);

    if(address == 1){  leds[0] = CRGB(0,0,0);}
    if(address == 2){  leds[0] = CRGB(255,255,255);}
    if(address == 3){  leds[0] = CRGB(0,0,0);}
    if(address == 4){  leds[0] = CRGB(255,255,255);}
    if(address == 5){  leds[0] = CRGB(0,0,0);}
    if(address == 6){  leds[0] = CRGB(255,255,255);}
    if(address == 7){  leds[0] = CRGB(0,0,0);}
    if(address == 8){  leds[0] = CRGB(255,255,255);}
    FastLED.show();   delay(20);
  }

}

void RGB_ElColorDelSonido(){
  //0:40 - 0:45
  if(address == 1)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 2)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 3)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 4)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 5)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 6)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 7)  leds[0] = CRGB(255,126,0);  //Naranja
  if(address == 8)  leds[0] = CRGB(255,126,0);  //Naranja
  FastLED.show();   delay(5000);


  //0:45 - 0:55
  rgb_color_8to1(255,126,0,0,240,255,1000); //De Naranja a Cian
  delay(3000);

  //0:55 - 1:05
  rgb_color_1to8(0,240,255,252,0,255,1000); //De Cian a Magenta
  delay(3000);

  //1:05 - 1:15
  rgb_color_8to1(252,0,255,0,255,36,1000);  //De Magenta a Verde
  delay(3000);

  //1:15 - 1:25 //////////
  rgb_color_1to8(0,255,36,88,0,255,1000);   //De Verde a Violeta(AZUL)
  delay(3000);

  //1:25 - 1:35
  rgb_color_8to1(88,0,255,255,288,0,1000);  //De Violeta a Amarillo
  delay(3000);

  //1:35 - 1:45
  rgb_color_1to8(255,288,0,0,12,255,1000);   //De Amarilo a Azul
  delay(3000);

  //1:45 - 1:55
  rgb_color_8to1(0,12,255,255,126,0,1000);  //De Azul a Naranja
  delay(3000);
/************/
  //1:55 - 2:05
  rgb_color_8to1(255,126,0,0,240,255,1000); //De Naranja a Cian
  delay(3000);

  //2:05 - 2:15
  rgb_color_1to8(0,240,255,252,0,255,1000); //De Cian a Magenta
  delay(3000);

  //2:15 - 2:25
  rgb_color_8to1(252,0,255,0,255,36,1000);  //De Magenta a Verde
  delay(3000);

  //2:25 - 2:35
  rgb_color_1to8(0,255,36,88,0,255,1000);   //De Verde a Violeta(AZUL)
  delay(3000);

  //2:35 - 2:45
  rgb_color_8to1(88,0,255,255,288,0,1000);  //De Violeta a Amarillo
  delay(3000);

  //2:45 - 2:55
  rgb_color_1to8(255,288,0,0,12,255,1000);   //De Amarilo a Azul
  delay(3000);

  //2:55 - 2:57
  delay(2000);
}

void rgb_color_8to1(int Ri,int Gi,int Bi,int Rf,int Gf,int Bf,int t){
  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   
}

void rgb_color_1to8(int Ri,int Gi,int Bi,int Rf,int Gf,int Bf,int t){
  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Ri,Gi,Bi);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Ri,Gi,Bi);
  FastLED.show();   delay(t);

  if(address == 1)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 2)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 3)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 4)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 5)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 6)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 7)  leds[0] = CRGB(Rf,Gf,Bf);
  if(address == 8)  leds[0] = CRGB(Rf,Gf,Bf);
  FastLED.show();   
}


void RGB_EmergenciaDelMiedo(){
  //2:56 - 3:19
  for(int y=1;y<=3;y++){
    for(int x=1; x<=2;x++){
      for(int i=1; i<=3;i++){
        if(address == 1)  leds[0] = CRGB(255,255,255);
        if(address == 2)  leds[0] = CRGB(255,255,255);
        if(address == 3)  leds[0] = CRGB(255,255,255);
        if(address == 4)  leds[0] = CRGB(255,255,255);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);
      
        if(address == 1)  leds[0] = CRGB(255,0,0);
        if(address == 2)  leds[0] = CRGB(255,0,0);
        if(address == 3)  leds[0] = CRGB(255,0,0);
        if(address == 4)  leds[0] = CRGB(255,0,0);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);
    
        if(address == 1)  leds[0] = CRGB(0,12,255);
        if(address == 2)  leds[0] = CRGB(0,12,255);
        if(address == 3)  leds[0] = CRGB(0,12,255);
        if(address == 4)  leds[0] = CRGB(0,12,255);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);
      }
    
      for(int i=1; i<=3;i++){
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(255,255,255);
        if(address == 6)  leds[0] = CRGB(255,255,255);
        if(address == 7)  leds[0] = CRGB(255,255,255);
        if(address == 8)  leds[0] = CRGB(255,255,255);
        FastLED.show();   delay(100);
    
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(255,0,0);
        if(address == 6)  leds[0] = CRGB(255,0,0);
        if(address == 7)  leds[0] = CRGB(255,0,0);
        if(address == 8)  leds[0] = CRGB(255,0,0);
        FastLED.show();   delay(100);
    
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(0,12,255);
        if(address == 6)  leds[0] = CRGB(0,12,255);
        if(address == 7)  leds[0] = CRGB(0,12,255);
        if(address == 8)  leds[0] = CRGB(0,12,255);
        FastLED.show();   delay(100);
      }
    }
  
    for(int x=1; x<=2;x++){  
      for(int i=1; i<=3;i++){
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(255,255,255);
        if(address == 4)  leds[0] = CRGB(255,255,255);
        if(address == 5)  leds[0] = CRGB(255,255,255);
        if(address == 6)  leds[0] = CRGB(255,255,255);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);
        
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(255,0,0);
        if(address == 4)  leds[0] = CRGB(255,0,0);
        if(address == 5)  leds[0] = CRGB(255,0,0);
        if(address == 6)  leds[0] = CRGB(255,0,0);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);
        
        if(address == 1)  leds[0] = CRGB(0,0,0);
        if(address == 2)  leds[0] = CRGB(0,0,0);
        if(address == 3)  leds[0] = CRGB(0,12,255);
        if(address == 4)  leds[0] = CRGB(0,12,255);
        if(address == 5)  leds[0] = CRGB(0,12,255);
        if(address == 6)  leds[0] = CRGB(0,12,255);
        if(address == 7)  leds[0] = CRGB(0,0,0);
        if(address == 8)  leds[0] = CRGB(0,0,0);
        FastLED.show();   delay(100);   
      }
    
      for(int i=1; i<=3;i++){
        if(address == 1)  leds[0] = CRGB(255,255,255);
        if(address == 2)  leds[0] = CRGB(255,255,255);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(255,255,255);
        if(address == 8)  leds[0] = CRGB(255,255,255);
        FastLED.show();   delay(100);
        
        if(address == 1)  leds[0] = CRGB(255,0,0);
        if(address == 2)  leds[0] = CRGB(255,0,0);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(255,0,0);
        if(address == 8)  leds[0] = CRGB(255,0,0);
        FastLED.show();   delay(100);
        
        if(address == 1)  leds[0] = CRGB(0,12,255);
        if(address == 2)  leds[0] = CRGB(0,12,255);
        if(address == 3)  leds[0] = CRGB(0,0,0);
        if(address == 4)  leds[0] = CRGB(0,0,0);
        if(address == 5)  leds[0] = CRGB(0,0,0);
        if(address == 6)  leds[0] = CRGB(0,0,0);
        if(address == 7)  leds[0] = CRGB(0,12,255);
        if(address == 8)  leds[0] = CRGB(0,12,255);
        FastLED.show();   delay(100);  
      }
    }
  }delay(400);
/*****************************/
  //03:19 - 03:25
  for (int z=1;z<=40;z++){
    if(address == 1)  leds[0] = CRGB(255,255,255);
    if(address == 2)  leds[0] = CRGB(255,255,255);
    if(address == 3)  leds[0] = CRGB(255,255,255);
    if(address == 4)  leds[0] = CRGB(255,255,255);
    if(address == 5)  leds[0] = CRGB(255,255,255);
    if(address == 6)  leds[0] = CRGB(255,255,255);
    if(address == 7)  leds[0] = CRGB(255,255,255);
    if(address == 8)  leds[0] = CRGB(255,255,255);
    FastLED.show();   delay(50);
    
    if(address == 1)  leds[0] = CRGB(255,0,0);
    if(address == 2)  leds[0] = CRGB(255,0,0);
    if(address == 3)  leds[0] = CRGB(255,0,0);
    if(address == 4)  leds[0] = CRGB(255,0,0);
    if(address == 5)  leds[0] = CRGB(255,0,0);
    if(address == 6)  leds[0] = CRGB(255,0,0);
    if(address == 7)  leds[0] = CRGB(255,0,0);
    if(address == 8)  leds[0] = CRGB(255,0,0);
    FastLED.show();   delay(50);
    
    if(address == 1)  leds[0] = CRGB(0,12,255);
    if(address == 2)  leds[0] = CRGB(0,12,255);
    if(address == 3)  leds[0] = CRGB(0,12,255);
    if(address == 4)  leds[0] = CRGB(0,12,255);
    if(address == 5)  leds[0] = CRGB(0,12,255);
    if(address == 6)  leds[0] = CRGB(0,12,255);
    if(address == 7)  leds[0] = CRGB(0,12,255);
    if(address == 8)  leds[0] = CRGB(0,12,255);
    FastLED.show();   delay(50);
  }
}

void RGB_HipnosisAmarilla(){
  //3:25 - 4:45
  for(int i=1;i<=80;i++){
    if(address == 1)  leds[0] = CRGB(255,228,0);
    if(address == 2)  leds[0] = CRGB(255,228,0);
    if(address == 3)  leds[0] = CRGB(255,228,0);
    if(address == 4)  leds[0] = CRGB(255,228,0);
    if(address == 5)  leds[0] = CRGB(255,228,0);
    if(address == 6)  leds[0] = CRGB(255,228,0);
    if(address == 7)  leds[0] = CRGB(255,228,0);
    if(address == 8)  leds[0] = CRGB(255,228,0);
    FastLED.show();   delay(1000);
  }
}

void AturdimientoRGB(){
  //4:45 - 6:15
  for(int x=1;x<=6;x++){
    for(int i=1;i<=100;i++){
      if(address == 1)  leds[0] = CRGB(255,0,0);
      if(address == 2)  leds[0] = CRGB(255,0,0);
      if(address == 3)  leds[0] = CRGB(255,0,0);
      if(address == 4)  leds[0] = CRGB(255,0,0);
      if(address == 5)  leds[0] = CRGB(255,0,0);
      if(address == 6)  leds[0] = CRGB(255,0,0);
      if(address == 7)  leds[0] = CRGB(255,0,0);
      if(address == 8)  leds[0] = CRGB(255,0,0);
      FastLED.show();   delay(50);
  
      if(address == 1)  leds[0] = CRGB(0,255,36);
      if(address == 2)  leds[0] = CRGB(0,255,36);
      if(address == 3)  leds[0] = CRGB(0,255,36);
      if(address == 4)  leds[0] = CRGB(0,255,36);
      if(address == 5)  leds[0] = CRGB(0,255,36);
      if(address == 6)  leds[0] = CRGB(0,255,36);
      if(address == 7)  leds[0] = CRGB(0,255,36);
      if(address == 8)  leds[0] = CRGB(0,255,36);
      FastLED.show();   delay(50);
  
      if(address == 1)  leds[0] = CRGB(0,12,255);
      if(address == 2)  leds[0] = CRGB(0,12,255);
      if(address == 3)  leds[0] = CRGB(0,12,255);
      if(address == 4)  leds[0] = CRGB(0,12,255);
      if(address == 5)  leds[0] = CRGB(0,12,255);
      if(address == 6)  leds[0] = CRGB(0,12,255);
      if(address == 7)  leds[0] = CRGB(0,12,255);
      if(address == 8)  leds[0] = CRGB(0,12,255);
      FastLED.show();   delay(50);
    }
  }
}

void setup() {
  FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
  FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
  pinMode(PinSensor, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(PinSensor), RGB_Play, CHANGE);

  leds[0] = CRGB(0,0,0);
  FastLED.show();
}

void(* resetFunc) (void) = 0;  // declare reset fuction at address 0

void RGB_Play(){
  if(digitalRead(PinSensor) == HIGH){
    secuencia = true;
  }

  if(digitalRead(PinSensor) == LOW){
    secuencia = false;
    leds[0] = CRGB(0,0,0);
    FastLED.show();
    resetFunc();
  }
}

void loop() {
  if (secuencia){
    RGB_RuidoBlanco();          //0:00 - 0:40  bien
    RGB_ElColorDelSonido();     //0:40 - 2:57
    RGB_EmergenciaDelMiedo();   //2:57 - 3:25
    RGB_HipnosisAmarilla();     //3:25 - 4:45
    AturdimientoRGB();          //4:45 - 6:15
    leds[0] = CRGB(0,0,0);
    FastLED.show();
  }
  
  if(!secuencia){
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    delay(1000);
  }
} 

