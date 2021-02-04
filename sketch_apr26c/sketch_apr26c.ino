
#include <Keypad.h>
const byte satir = 4;
const byte sutun = 3; 
char hexaKeys[satir][sutun] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte satirpin[satir] = {13,12,11,10};
byte sutunpin[sutun] = {9,8,7};


Keypad tus_takimi = Keypad( makeKeymap(hexaKeys), satirpin, sutunpin, satir, sutun); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char tus= tus_takimi.getKey();
  
  if (tus){
    Serial.println(tus);
  }
}
