const int trig=4;
const int echo =5;
int sure;
int mesafe;
void setup() {
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);         
Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);
  sure=pulseIn(echo,HIGH);
  mesafe=(sure/2)/29.1;
  Serial.println(mesafe);
  delay(500);
}

