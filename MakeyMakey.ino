#include "pitches.h"

/*
 * Referencias
 * https://www.arduino.cc/en/Tutorial/toneMelody
 */

/*
 * Notes in the melody
 * NOTE_C5  523 
 * NOTE_D5  587
 * NOTE_E5  659
 * NOTE_F5  698
 * NOTE_G5  784
 * NOTE_A5  880
 * NOTE_B5  988
 * NOTE_C6  1047
 */

int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};

// 500 miliseconds
int duration = 100;


/* Pin del buzzer el 7 digital */
int zumbador = 7;

void setup() {
  pinMode(zumbador, OUTPUT);
  Serial.begin(9600);
}


void loop() {
/*  
  int objeto1 = analogRead(0);
  int objeto2 = analogRead(1);
  int objeto3 = analogRead(2);
  int objeto4 = analogRead(3);
  int objeto5 = analogRead(4);
  int objeto6 = analogRead(5);
*/
/* wiki/Escala_musical
 * NOTE_C5 => DO NOTE_G5 => SOL
 * NOTE_D5 => RE NOTE_A5 => LA
 * NOTE_E5 => MI NOTE_B5 => SI
 * NOTE_F5 => FA NOTE_C6 =>
 */
 
  if( analogRead(A0) < 990 ){
    tone(zumbador, NOTE_C5);
    Serial.print("Analog 0: ");
    Serial.println(analogRead(A0));
    delay(100);
    noTone(zumbador);
  }
  if( analogRead(A1) < 990 ){
    tone(zumbador, NOTE_D5);
    Serial.print("Analog 1: ");
    Serial.println(analogRead(A1));
    delay(100);
    noTone(zumbador);
  }
  if( analogRead(A2) < 990 ){
    tone(zumbador, NOTE_E5);
    Serial.print("Analog 2: ");
    Serial.println(analogRead(A2));
    delay(100);
    noTone(zumbador);
  }
  if( analogRead(A3) < 990 ){
    tone(zumbador, NOTE_F5);
    Serial.print("Analog 3: ");
    Serial.println(analogRead(A3));
    delay(100);
    noTone(zumbador);
  }
  if( analogRead(A4) < 980 ){
    tone(zumbador, NOTE_G5);
    Serial.print("Analog 4: ");
    Serial.println(analogRead(A4));
    delay(100);
    noTone(zumbador);
  }
/* if( analogRead(A5) < 900 ){
    tone(zumbador, NOTE_A5);
    Serial.print("Analog 5: ");
    Serial.println(analogRead(A5));
    delay(100);
    noTone(zumbador);
  }*/
 

  
  
/*
 for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond  
  tone(8, melody[thisNote], duration);
     
   // Output the voice after several minutes
   delay(1000);
  }
   
  // restart after two seconds 
  delay(2000);
 */

/*    
  int objeto1 = analogRead(A0);     
  if(objeto1 < 1000){
    tone(buzzer,560);
    delay(200);
  }
  else{
    noTone(buzzer);
  }
  //Serial.println(objeto1);
*/  
}
