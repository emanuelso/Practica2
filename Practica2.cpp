#include <Arduino.h>
#define LED 13
int VAL;
unsigned long myTime;
unsigned long myTime2;

void Led_on(void);

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
    pinMode(LED,OUTPUT);
    pinMode(0,INPUT);
    delay(5000);
    attachInterrupt(digitalPinToInterrupt(0), Led_on, FALLING);
}

void lovoid Led_on(void){

    delay(2000);
    digitalWrite(LED,LOW);
    Serial.println("OFF");
    //cout<<"OFF";
    delay(1000);
    

}
unsigned long contadorRetardo;

void Led_on(void){
  contadorRetardo=-1;
  Serial.println("ON");
  //myTime=millis();
  Serial.println(myTime);
  Serial.println("ON2");
  myTime2=myTime+1000;
   digitalWrite(LED,HIGH);
    
  while(contadorRetardo!=0){
    contadorRetardo--;
  }
 
}