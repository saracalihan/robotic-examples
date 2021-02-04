#include <Servo.h>

Servo servo;  
Servo servo2;
Servo servo3;

int pos = 0; 
int pot1=A0;
int pot2=A1;
int pot3=A3;
int d1;
int d2;
int d3;  

void setup() {
 servo.attach(9);
 servo2.attach(10);
 servo3.attach(11);   
 Serial.begin(9600);  
}

void loop() {
d1 = analogRead(pot1);
d1 = map(d1,0,1023,0,180);
servo.write(d1);

d2 = analogRead(pot2);
d2 = map(d2,0,1023,0,180);
servo2.write(d2);

d3 = analogRead(pot3);
d3 = map(d3,0,1023,0,180);
servo3.write(d3);

Serial.print("d1 = ");
Serial.println(d1);
Serial.println("-------------------");
Serial.print("d2 = ");
Serial.println(d2);
Serial.println("-------------------");

}
