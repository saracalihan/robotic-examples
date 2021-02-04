float vPow = 4.7; 
float r1 = 100000; 
float r2 = 10000;


void setup(){
Serial.begin(9600);
}

void loop() {
    float v = (analogRead(0) * vPow) / 1024.0; 
    float v2 = v / (r2 / (r1 + r2));



if (v2 <0.9){ 
Serial.println("az");
delay(250);
}
if (v2 >0.9 && v2 <1.0){ 
Serial.println("yirmi");
delay(250);
}
if (v2 >1.0 && v2 <1.1){ 
Serial.println("kirk");
delay(250);
}
if (v2 >1.1 && v2 <1.2){ 
Serial.println("atmış");
delay(250);
}
if (v2 >1.2 && v2 <1.3){ 
Serial.println("seksen");
delay(250);
}
if (v2 >1.3){ 
Serial.println("full");
}

}
