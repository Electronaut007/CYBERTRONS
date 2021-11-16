#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  if(Serial.available()> 0)
  {
    char state = Serial.read();
    if (state == 'O' || state == 'o'){
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED ON");
    }
    if(state == 'N'|| state == 'n'){
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED off");
    }
    }
    delay(1000);
     }
  
