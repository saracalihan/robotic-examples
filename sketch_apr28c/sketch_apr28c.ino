int ldr=A0;
int deger;
void setup() {
Serial.begin(9600);
}

void loop() {
deger=analogRead(ldr);
Serial.println(deger);
map(deger,0,1023,0,100);

}
