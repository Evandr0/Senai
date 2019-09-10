#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define saida digitalWrite
#define btn1 6
#define btn2 7
#define btn3 8
#define btn4 9
#define btn5 10
#define btn6 13
#define led1 A0
#define led2 A1
#define led3 A2
#define led4 A3
#define led5 A4
#define led6 A5

int statusBtn1, statusBtn2, statusBtn3, statusBtn4;
int gaveta1=0, gaveta2=0, gaveta3=0, gaveta4=0, gaveta5=0, gaveta6=0;


void setup()
{
    lcd.begin(16, 2); //inicialiação do LCD
    Serial.begin(9600);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);

}

void loop()
{
    ler_sensores();
    acionar_leds();
    relatorio_serial();
    relatorio_lcd();
    delay(100);
}
void relatorio_serial(){
    Serial.print("Gaveta1: ");
    Serial.println(gaveta1);
    Serial.print("Gaveta2: ");
    Serial.println(gaveta2);
    Serial.print("Gaveta3: ");
    Serial.println(gaveta3);
    Serial.print("Gaveta4: ");
    Serial.println(gaveta4);
    Serial.print("Gaveta5: ");
    Serial.println(gaveta5);
    Serial.print("Gaveta6: ");
    Serial.println(gaveta6);
}
void relatorio_lcd(){
    lcd.setCursor(0, 0);
    lcd.print("G1:");
    lcd.print(gaveta1);
    lcd.print(" ");
    lcd.print("G2:");
    lcd.print(gaveta2);
    lcd.print(" ");
    lcd.print("G3:");
    lcd.print(gaveta3);
    lcd.setCursor(0, 1);
    lcd.print("G4:");
    lcd.print(gaveta4);
    lcd.print(" ");
    lcd.print("G5:");
    lcd.print(gaveta5);
    lcd.print(" ");
    lcd.print("G6:");
    lcd.print(gaveta6);
}

void acionar_leds()
{
    saida(led1, gaveta1);
    saida(led2, gaveta2);
    saida(led3, gaveta3);
    saida(led4, gaveta4);
    saida(led5, gaveta5);
    saida(led6, gaveta6);    
}

void ler_sensores()
{
    statusBtn1 =  digitalRead(btn1);
    if (statusBtn1 == 1) {
        gaveta1 = 1;
    }else {
        gaveta1 = 0;
    }
    delay(200);

    statusBtn2 = digitalRead(btn2);
    if (statusBtn2 == 1)  {
        gaveta2 = 1;
    }else {
        gaveta2 = 0;
    }
    delay(200);
    statusBtn3 = digitalRead(btn3);
    if (statusBtn3 == 1)  {
        gaveta3 = 1;
    }else {
        gaveta3 = 0;
    }
    delay(200);
    statusBtn4 = digitalRead(btn4);
    if (statusBtn4 == 1)  {
        gaveta4 = 1;
    }else {
        gaveta4 = 0;
    }
    delay(200);
    if (digitalRead(btn5) == 1) {
        gaveta5 = 1;
    }else {
        gaveta5 = 0;
    }
    delay(200);
    if (digitalRead(btn6) == 1)  {
        gaveta6 = 1;
    }else {
        gaveta6 = 0;
    }
    delay(200);
}