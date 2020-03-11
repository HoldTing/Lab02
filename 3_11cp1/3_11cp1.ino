const byte LEDs[] =
{2,3,4,5,8,9,10,11};
const byte total = sizeof(LEDs);
int index = 0;
int i=0;
void setup() {
for (byte i=0;i<total;i++) {
  pinMode(LEDs[i], OUTPUT); 
};
for (i=0;i<total;i++) 
    {
       digitalWrite(LEDs[i], LOW);
    }
}
void loop()
{
  
         for (index=0; index <= 7; index++) 
         { 
          digitalWrite(LEDs[index], HIGH);
          delay(100);
          digitalWrite(LEDs[index], LOW);
         }
  
          for (index=7; index >=0; index--) 
          { 
          digitalWrite(LEDs[index], HIGH);
          delay(100);
          digitalWrite(LEDs[index], LOW);
          }
}
