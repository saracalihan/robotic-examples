const int ledk = 5;
const int ledy=7;
const int ledm = 6;
const int trig=8;
const int echo =9 ;
int sure;
int mesafe;
const int buzzer=4;
void setup() {
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(buzzer,INPUT);
Serial.begin(9600);

}
void loop() {
 digitalWrite(trig,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trig,LOW);
 sure=pulseIn(echo,HIGH);
 mesafe=(sure/2)/28,8;
Serial.println(mesafe);
delay(1000);
if(mesafe<10){
  digitalWrite(ledk,LOW);
  digitalWrite(ledy,HIGH);
  digitalWrite(ledm,HIGH);
  delay(70);
  
}
else if(mesafe<30){
  digitalWrite(ledk,HIGH);
  digitalWrite(ledy,HIGH);
  digitalWrite(ledm,LOW);
   delay(70);
}
else if(mesafe<50){
  digitalWrite(ledk,HIGH);
  digitalWrite(ledy,LOW);
  digitalWrite(ledm,HIGH);
   delay(70);
}
else if(mesafe<100){
  digitalWrite(ledk,LOW);
  digitalWrite(ledy,LOW);
  digitalWrite(ledm,LOW);
   delay(70);
}
}
