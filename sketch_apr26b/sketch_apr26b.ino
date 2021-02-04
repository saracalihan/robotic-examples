/*ilk önce ır sensörün 
sol bacağını sinyale(3)
orta gnd 
sağ 5v+ 
ve sinyal geldiğini anlamak için led(4)
*/
#include<IRremote.h>
IRrecv irrecv(3);
decode_results results;
#define on 0x80BF3BC4

void setup() {
Serial.begin(9600);
irrecv.enableIRIn();
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
}

void loop() {
if(irrecv.decode(&results)){
  Serial.println(results.value,HEX);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(1);
  irrecv.resume();
}
if(results.value==on){
  digitalWrite(4, !digitalRead(3));
}
}
