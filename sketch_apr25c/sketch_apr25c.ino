int pot;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
const byte pin=A0;

}

void loop() {
pot=analogRead(A0);
Serial.println(pot);
delay(50);

}
