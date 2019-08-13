#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
///teste git


//teste site git
void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello, World!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Olah Mundo");
  delay(10000);
  lcd.clear();
  lcd.print("Daqui a pouco");
  lcd.setCursor(0, 1);
  lcd.print("Vamos comecar");
  delay(2000);
  lcd.clear();
  lcd.print("a brincar");
  lcd.setCursor(0, 1);
  lcd.print("Com variaveis!!");
  delay(2000);
  lcd.clear();
}
 
