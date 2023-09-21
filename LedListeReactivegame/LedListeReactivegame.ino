#include <Adafruit_NeoPixel.h>
#ifdef _AVR_
#include <avr/power.h>  
#endif

#define PIN_NEO_PIXEL 13
#define NUMPIXELS 32
#define DELAY_INTERVAL 500  

Adafruit_NeoPixel NeoPixel(NUMPIXELS, PIN_NEO_PIXEL, NEO_GRB + NEO_KHZ800);
const int ledPin = 13;
int sensorPin1 = 4;
int long ranDelay = 0;
int   sensorValue = 0;
float realTime;

void setup()
{
  Serial.begin(9600);
   pinMode(ledPin, OUTPUT);
  pinMode(sensorPin1, INPUT);
}



void loop(){
   Serial.println("");
  Serial.println("");
  Serial.println("");
   Serial.println("Push the button to start game");
  
  while (digitalRead(sensorPin1)==   0) {
  }
  Serial.println("");
  Serial.println("");
  Serial.println("");
   Serial.println("Get Ready!");
  delay(1000);
  Serial.println("Get Set!");
   delay(1000);
  ranDelay = random(5000);
  delay(ranDelay);
  Serial.println("Go!");
   
  realTime = millis();
  NeoPixel.fill(NeoPixel.Color(0,255,0));
  NeoPixel.show();


  while   (digitalRead(sensorPin1)== 0) {
    
  }
  digitalWrite(ledPin, LOW);
   Serial.println("Your time was");
  realTime = millis()-realTime;
  Serial.print(realTime/1000,2);
   Serial.println(" seconds");
 delay(2000); 
 NeoPixel.clear();
 NeoPixel.show();
}

