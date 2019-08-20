/* Relogio digital com ajuste do dia da semana
Possivel implementar botão para ajuste do dia da semana sendo:
variavel diaSemana = 0 (então dia da semana é domingo)*/
#define botaoS 10 //botao semana
#define botaoH 9 //botao Hora
#define botaoM 8 //botao Minuto
#define btnEntrar 7
#define btnSair 13
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int segundos;
int minutos;
int horas;
int diaSemana;
int statusBotaoS = 0;
int statusBotaoH = 0;
int statusBotaoM = 0;
int statusbtnEntrar = 0;
int statusbtnSair = 0;

void setup() {
  pinMode(10, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(7, INPUT);
  lcd.begin(16, 2); //inicialiação do LCD
  segundos = 0;
  minutos = 59;
  horas= 23;
  diaSemana = 5; // 0 = domingo e 6 = sabado
}

void loop() { 
  //calculo relógio
  lcd.clear();
  segundos++;   
  if(segundos > 59) 
  {
    segundos = 0;
    minutos++;
  }
  if(minutos > 59) 
  {
    horas++;
    minutos = 0;
  }
  if(horas > 23) 
  {
    horas = 0;
    minutos = 0;
    segundos = 0;
    diaSemana++;
  }
  if(diaSemana > 6)
  {
    diaSemana = 0;
  }
  
  //print dia da semana
  lcd.setCursor(0, 0);
  if(diaSemana == 0)
  {
    lcd.print("#   Domingo    #");
  }
  if(diaSemana == 1)
  {
    lcd.print("# Segunda-Feira#");
  }
  if(diaSemana == 2)
  {
    lcd.print("# Terca-Feira  #");
  }
  if(diaSemana == 3)
  {
    lcd.print("# Quarta-Feira #");
  }
  if(diaSemana == 4)
  {
    lcd.print("# Quinta-Feira #");
  }
  if(diaSemana == 5)
  {
    lcd.print("#  Sexta-Feira #");
  }
  if(diaSemana == 6)
  {
    lcd.print("#    Sabado    #");
  }


  //ajuste relógio
  statusbtnEntrar = digitalRead(btnEntrar);
  while(statusbtnEntrar == 1)
  {
    statusbtnEntrar = 1;
    statusBotaoH = digitalRead(botaoH);
    if(statusBotaoH == 1)
    {
        lcd.clear();
      if(horas < 23)
      {
      horas++;
      }else{
        horas = 0;
      }
    }
  
    statusBotaoM = digitalRead(botaoM);
    if(statusBotaoM == 1)
    {
      if(minutos < 59)
      {
      minutos++;
      }else{
        minutos = 0;
      }
    }
    statusBotaoS = digitalRead(botaoS);
    if(statusBotaoS == 1)
    {
      if(diaSemana < 6)
      {
      diaSemana++;
      }else{
        diaSemana = 0;
      }
      //print dia da semana
  lcd.setCursor(0, 0);
  if(diaSemana == 0)
  {
    lcd.print("#   Domingo    #");
  }
        if(diaSemana == 1)
        {
            lcd.print("# Segunda-Feira#");
        }
        if(diaSemana == 2)
        {
            lcd.print("# Terca-Feira  #");
        }
        if(diaSemana == 3)
        {
            lcd.print("# Quarta-Feira #");
        }
        if(diaSemana == 4)
        {
            lcd.print("# Quinta-Feira #");
        }
        if(diaSemana == 5)
        {
            lcd.print("#  Sexta-Feira #");
        }
        if(diaSemana == 6)
        {
            lcd.print("#    Sabado    #");
        }
    }
    //######################
      lcd.setCursor(4,1);
      if(horas <10)
      {
        lcd.print("0");
      }
      lcd.print(horas);
      lcd.print(":");
      if(minutos <10)
      {
        lcd.print("0");
      }
      lcd.print(minutos);
      lcd.print(":");
      if(segundos <10)
      {
        lcd.print("0");
      }
      lcd.print(segundos);
    
    //se pressionar btnEntrar, sai do loop.
    
    statusbtnSair = digitalRead(btnSair);
    
    if(statusbtnSair == 1)
    {
      statusbtnEntrar = 0;
    }
    delay(200);
    //final do ajuste do relógio. (Fim do while)
  }
  
  //print relógio
  
  lcd.setCursor(4,1);
  if(horas <10)
  {
    lcd.print("0");
  }
  lcd.print(horas);
  lcd.print(":");
  if(minutos <10)
  {
    lcd.print("0");
  }
  lcd.print(minutos);
  lcd.print(":");
  if(segundos <10)
  {
    lcd.print("0");
  }
  lcd.print(segundos);
  delay(1000);
}