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

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
  lcd.begin(16, 2);
  lcd.print("Alihan SARAC");
}
 
void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
