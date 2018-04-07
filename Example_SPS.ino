
#include "High_Temp.h"
#include <Grove_LED_Bar.h>

Grove_LED_Bar bar(3, 2, 1);  // Clock pin, Data pin, Orientation
HighTemp ht(A1, A0);
int Temp;
char inChar;

void setup()
{
  Serial.begin(9600);
  ht.begin();
  bar.begin();
}

void loop()
{
  if (Serial.available() > 0) {
    inChar = Serial.read();
    if (inChar == 'g'){
        Temp = ht.getThmc();
        Serial.println(Temp);
        }
     if (isHexadecimalDigit(inChar)) {
         bar.setLevel(int(inChar)-48);
         //Serial.println(inChar);
     }
  }
}
