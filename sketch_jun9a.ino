long duration;
int distance;
int IN1 = 8;
int IN2 = 11;
int IN3 = 6;
int IN4 = 7;
int ENA = 5;
int ENB = 3;
#include <SoftwareSerial.h>


SoftwareSerial BT(2, 4); // RX, TX
void setup()
{
    pinMode(10, OUTPUT);
    pinMode(9, INPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);


   Serial.begin(9600);
   BT.begin(9600);
}

void loop()
{
   digitalWrite(10, LOW);
   delayMicroseconds(2);

   digitalWrite(10, HIGH);
   delayMicroseconds(10);
   digitalWrite(10, LOW);

  duration = pulseIn(9, HIGH);

  distance = duration * 0.034 / 2;
  BT.print("Distance = ");
  BT.print(distance);
  BT.println(" cm");

  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance > 5)
    {
    // Red off, Blue On
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);

    // Motor ON
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    analogWrite(ENA, 200);
    analogWrite(ENB, 200);
    }
   else
   {
      // Motor OFF
       digitalWrite(IN1, LOW);
       digitalWrite(IN2, LOW);
       digitalWrite(IN3, LOW);
       digitalWrite(IN4, LOW);

       analogWrite(ENA, 0);
       analogWrite(ENB, 0);

       // Blue off, Red On
       digitalWrite(12, HIGH);
       digitalWrite(13, LOW);
   }
}