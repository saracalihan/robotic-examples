#include <Servo.h>

/*bu kod geliştirilebilir uzaktan kontrollü araçlar  için hazırlanmıştır
kodlar ve yardımcı elemanlar eklenerek geliştirilebilr 
motorun kutuplarına göre mot ve mot2 ler bağlanmalıdır
kutuplar ters ise ileri komutunda araba ters gidecektir
mot2 ler motorun diğer kutbunu temsil eder
ldr ışık sensörü için 1k direnç
vinç sistemi için servolar eklenmiştir
mesafe sensörü ile çarpışmalar önlenir*/
Servo servo1;
Servo servo2;
Servo servo3;
int ldr=A0;
const int solmot = 8;
const int solmot2= 9;
const int sagmot =10;
const int sagmot2=11;
const int far=6;
const int korna=7;
String readString;
int isik;
int sure;
int mesafe;
const int echo = 5;
const int trig=4;
int pos1;
int pos2;
int pos3;
void setup() {
  Serial.begin(9600);
  pinMode(sagmot, OUTPUT);
  pinMode(sagmot2,OUTPUT);
  pinMode(solmot,OUTPUT);
  pinMode(solmot2,OUTPUT);
  pinMode(far,OUTPUT);
  pinMode(korna,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(12);
   digitalWrite(far,HIGH);
  digitalWrite(korna,HIGH);
  delay(75);
  digitalWrite(korna,LOW);
  delay(75);
  digitalWrite(korna,HIGH);
  delay(75);
  digitalWrite(korna,LOW);
  delay(75);
  digitalWrite(korna,HIGH);
  delay(450);
  digitalWrite(korna,LOW);
  digitalWrite(far,LOW);
  
  }

void loop() { 
  while (Serial.available()) {
    delay(3);  
    char c = Serial.read();
    readString += c; 
  }
  if (readString.length() >0) {
    
    Serial.println(readString); 
        if (readString == "ileri")     
    {
     digitalWrite(sagmot,HIGH);
     digitalWrite(sagmot2,LOW);
     digitalWrite(solmot,HIGH);
     digitalWrite(solmot2,LOW);
    }
    if (readString == "boş"){
    digitalWrite(sagmot,LOW);
    digitalWrite(sagmot2,LOW);
    digitalWrite(solmot,LOW);
    digitalWrite(solmot2,LOW);
    digitalWrite(korna,LOW);
    digitalWrite(far,LOW);
    }
    if (readString=="sag"){
      digitalWrite(solmot,LOW);
      digitalWrite(solmot2,HIGH);
      digitalWrite(sagmot,HIGH);
      digitalWrite(sagmot2,LOW);
    }
     if (readString=="sol"){
      digitalWrite(sagmot,LOW);
      digitalWrite(sagmot2,HIGH);
      digitalWrite(solmot,HIGH);
      digitalWrite(solmot2,LOW);
    }
    if(readString=="geri"){
     digitalWrite(sagmot2,HIGH);
     digitalWrite(sagmot,LOW);
     digitalWrite(solmot2,HIGH);
     digitalWrite(solmot,LOW); 
    }
    if(readString=="korna"){
      digitalWrite(korna,HIGH);
    }
    if(readString=="far"){
      digitalWrite(far,HIGH);}
      if(readString=="fren"){ 
     digitalWrite(sagmot,HIGH);
     digitalWrite(sagmot2,HIGH);
     digitalWrite(solmot,HIGH);
     digitalWrite(solmot2,HIGH);
     digitalWrite(far,HIGH);
     digitalWrite(korna,HIGH);
      }
      if(readString=="kaldır"){
      pos1 = pos1 + 1;
      servo3.write(pos1);
      delay(15);}
      if(readString=="indir"){
      pos1 = pos1 - 1;
      servo3.write(pos1);
      delay(15);}
       if(readString=="yukarı"){
      pos2 = pos2 + 1;
      servo2.write(pos2);
      delay(15);}
       if(readString=="asagı"){
      pos2 = pos2 - 1;
      servo2.write(pos2);
      delay(15);}
       if(readString=="sag"){
      pos3 = pos3 + 1;
      servo1.write(pos3);
      delay(15);}
       if(readString=="sol"){
      pos3 = pos3 - 1;
      servo1.write(pos3);
      delay(15);}
      if(readString=="sıfırla"){
        servo1.write(90);
        servo2.write(90);
        servo3.write(90);
      }
     
      
      }
    readString="";
    
     digitalWrite(trig,HIGH);
       delayMicroseconds(1000);
       digitalWrite(trig,LOW);
       sure = pulseIn(echo,HIGH);
       mesafe = (sure/2)/28.5 ;
       Serial.println(mesafe);
       if(0<mesafe){
      if(mesafe<=15){
      digitalWrite(solmot,LOW);
      digitalWrite(solmot2,HIGH);
      digitalWrite(sagmot,HIGH);
      digitalWrite(sagmot2,LOW);
      delay(250);
        digitalWrite(solmot,LOW);
      digitalWrite(solmot2,LOW);
      digitalWrite(sagmot,LOW);
      digitalWrite(sagmot2,LOW);
      }}
  }
  
 


