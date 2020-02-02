#include <CapacitiveSensor.h>

int servoPin = 13;
int switchPin = 3;
int pulseWidth;
int myAngle;

CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2); 
void setup()
{
 cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
 pinMode(13, OUTPUT); 
 Serial.begin(9600);
 int maxCount = 10;
 int counter = 0;
}

void servoPulse(int servoPin, int myAngle)  {

  pulseWidth = (myAngle * 10) + 600;
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(servoPin, LOW);
}


void loop()
{
 long start = millis();
 long total1 = cs_4_2.capacitiveSensor(30);
 int threshold = 2;
 Serial.print(millis() - start); // check on performance in milliseconds
 Serial.print("\t"); // tab character for debug windown spacing
 Serial.println(total1); // print sensor output 1
 if(total1 < threshold)
 {
   digitalWrite(servoPin,LOW);
 }
 else
 {
  for (myAngle=4; myAngle<=94; myAngle++)
    {
      servoPulse(servoPin, myAngle);
      delay(1);
    }
    delay(100);
   for (myAngle=94; myAngle>=4; myAngle--)
    {
      servoPulse(servoPin, myAngle);
      delay(5);
    }
    delay(2000);
 }

 delay(10); // arbitrary delay to limit data to
}
 
#include <CapacitiveSensor.h>

int servoPin = 13;
int switchPin = 3;
int pulseWidth;
int myAngle;

CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2); 
void setup()
{
 cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF);
 pinMode(13, OUTPUT); 
 Serial.begin(9600);
 int maxCount = 10;
 int counter = 0;
}

void servoPulse(int servoPin, int myAngle)  {

  pulseWidth = (myAngle * 10) + 600;
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(servoPin, LOW);
}


void loop()
{
 long start = millis();
 long total1 = cs_4_2.capacitiveSensor(30);
 int threshold = 2;
 Serial.print(millis() - start); // check on performance in milliseconds
 Serial.print("\t"); // tab character for debug windown spacing
 Serial.println(total1); // print sensor output 1
 if(total1 < threshold)
 {
   digitalWrite(servoPin,LOW);
 }
 else
 {
  for (myAngle=4; myAngle<=94; myAngle++)
    {
      servoPulse(servoPin, myAngle);
      delay(1);
    }
    delay(100);
   for (myAngle=94; myAngle>=4; myAngle--)
    {
      servoPulse(servoPin, myAngle);
      delay(5);
    }
    delay(2000);
 }

 delay(10); // arbitrary delay to limit data to
}
 
