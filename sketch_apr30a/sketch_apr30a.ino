#include <Servo.h>
Servo s;
Servo s2;
int pos=180;
int pos1=180;
int pos2=111;
void setup() {
s.attach(9);
s2.attach(10);

}

void loop() {
s.write(180);
delay(250);
s2.write(35);
delay(250);
s.write(180);
delay(205);
s2.write(180);
delay(250);
for(pos=180;pos>=38;pos-=1){
  s.write(pos);
  s2.write(pos);
  delay(1);
}
delay(10);
s.write(42);
delay(250);
s2.write(180);
delay(250);
 s.write(180);
 s2.write(35);
  delay(250);

}
