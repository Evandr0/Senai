/* Maquina de secar que liga com um botao e desliga após 30 "Minutos"*/

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define btnLigar 6
#define secadora 8
#define saida digitalWrite
int tempo = 30;
int statusbtnLigar = 0;

void setup() {
  pinMode(6, INPUT); //Configura o btn
  pinMode(secadora, OUTPUT); //configura o pino do LED OUT6
  lcd.begin(16, 2); // liga LCD
}

void loop() {
lcd.clear();
delay(200);

	statusbtnLigar = digitalRead(btnLigar); //Lê o status do btnLigar.

	if(statusbtnLigar == 1) //Se o status do btn for 1 então...
	{	
      while(tempo >= 0) //enquanto o tempo for >ou= 0 executa o timer
      {
	  saida(secadora, 1);
	  lcd.clear();
	  lcd.print(tempo);
	  delay(1000);
	  tempo--;
	  }
	}
  lcd.clear();
  saida(secadora, 0);
  lcd.print("MaquinaDesligada");
  delay(1000);
  tempo = 30;
}
 