/*pin düzeni
+- -
- - gnd
1- gnd
2- +
3- potansiyometree
4-pin12
5- gnd
6-pin11
11-pin5
12-pin4
13-pin3
14-pin2
*/
#include <LiquidCrystal.h>
#include <Keypad.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const byte satir = 4;
const byte sutun = 3; 
char hexaKeys[satir][sutun] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte satirpin[satir] = {10,A0,A1,A2};
byte sutunpin[sutun] = {A3,A4,A5};
char*sifre[4]={"3","9","5","5"};
char sifre2[4];
int i=0;

Keypad tus_takimi = Keypad( makeKeymap(hexaKeys), satirpin, sutunpin, satir, sutun); 

void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.write("Sifre girin");
}
  
void loop(){
  char tus= tus_takimi.getKey();
  if (tus){
    lcd.print("*");
 if(tus=3){
 if(tus=9){
      lcd.write("onay");
    
  
 
 }
  }}
  if(tus="*"){
    //lcd.clear();
  }
  
}

