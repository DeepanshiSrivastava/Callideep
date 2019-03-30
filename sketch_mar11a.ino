
   #include <Servo.h>
   #include <Math.h>
 Servo object;
int  angle =0;
void setup() {
  object.attach(9);
}


void loop() {
  // put your main code here, to run repeatedly:                                                                                                  
for(angle=0; angle<=360;angle++)
{
  object.write((int)(abs(angle-180)));
delay(15);
}

}
