/*
 * TU MUNDO MAKER
*/

#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#define PinSensor 2

SoftwareSerial DFPlayerSerial(10, 11);      //(Rx, Tx)

bool Pin_State = 0;

void setup(){
   pinMode(PinSensor, INPUT_PULLUP);
   Serial.begin(9600);
   DFPlayerSerial.begin(9600);
   mp3_set_serial(DFPlayerSerial);
   
   mp3_single_loop(false);
   mp3_set_volume(30);
   mp3_stop();
   attachInterrupt(digitalPinToInterrupt(PinSensor), MP3_Play, CHANGE);
}

void MP3_Play(){
  if(digitalRead(PinSensor) == HIGH){
    mp3_play();   
  }
}
 
void loop() {
  if(digitalRead(PinSensor) == LOW){
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    delay(1000);
  }
}

/* INSTRUCCIONES MP3
 
  mp3_play(x);                // Reproducir el xº archivo de la tarjeta SD
  mp3_play();                 // Reproducir el 1º archivo de la tarjeta SD
  mp3_pause();                // Pause
  mp3_stop();                 // Detener
  mp3_next();                 // Siguiente
  mp3_prev();                 // Anterior
  mp3_random_play();          // Reproduccion aleatoria
  mp3_set_volume(volumen);    // Volumen (0~30)
  mp3_single_loop(state);     // Bucle unico (true or false)
  mp3_set_EQ();               // Ecualizador (0~5)
*/
