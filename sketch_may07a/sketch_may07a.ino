#include <Servo.h>
#include<IRremote.h>
IRrecv irrecv(3);
decode_results results;
#define ileri 80BF53AC
#define geri 80BF4BB4
#define sol 80BF9966
#define sag 80BF837C
Servo sagon;
Servo solon;  
Servo sagarka;
Servo solarka;
int possag;
int possol;
int possag2;
int possol2;


void setup() {
 Serial.begin(9600);
irrecv.enableIRIn();
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
sagon.attach(9);
solon.attach(10);
sagarka.attach(11);
solarka.attach(12);

}

void loop() {
  for( possol = 44 , possag = 136; possol <= 136 && possag >= 44; possag -= 1 ,  possol += 1 ) {
    solon.write(possol);
    sagarka.write(possag); 
    delay(15);                      
  }
   for( possol2 = 136 , possag2 = 42; possag2 <= 136 && possol2 >= 44; possol2 -= 1 ,  possag2 += 1 ) {
    solarka.write(possol2);
    sagon.write(possag2); 
    delay(15);
   }
/*  for (possag = 136; possag >= 44; possag -= 1) { 
    sagon.write(possag);
    sagarka.write(possag);
    delay(15);                      
  }
     
  }
   for (possag = 44; possag <= 136; possag += 1) { 
    sagon.write(possag);
    sagarka.write(possag);
    delay(15);                      
  }*/
 
  
    
if(irrecv.decode(&results)) {
  Serial.println(results.value,HEX);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(1);
  irrecv.resume();
  }
  } 
  


