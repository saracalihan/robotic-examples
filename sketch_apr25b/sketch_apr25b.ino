const int ledk = 8;
const int ledy=7;
const int ledm = 6;

void setup() {
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);

}

void loop() {
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
delay(60);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
delay(60);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
delay(60);
}
