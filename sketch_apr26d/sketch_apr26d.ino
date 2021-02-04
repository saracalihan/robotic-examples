const int trig=8;
const int echo =9;
const int led=7;
int sure;
int mesafe;
void setup() {
  pinMode(led,OUTPUT);
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
  if(mesafe<10){
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    Serial.println("*10");
    delay (10);}
   else if (mesafe<20){
      digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    Serial.println("*20");
    delay (300);
    }
   else if (mesafe<50){
      digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    Serial.println("*50");
    delay (750);
    }
  
}

