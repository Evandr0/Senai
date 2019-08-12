//define apelidos para os pinos correspondentes
#define vm1 5
#define vm2 6
#define vm3 7
#define vm4 8
#define am1 9
#define vd1 10
#define vd2 11
#define vd3 12
#define vd4 13
#define vm5 1
#define vm6 2
#define vm7 3
#define vm8 4
#define am2 0
#define vd5 A2
#define vd6 A3
#define vd7 A4
#define vd8 A5
#define saida digitalWrite

//configuração dos pinos como saida.
void setup()
{
  pinMode(vm1, OUTPUT);
  pinMode(vm2, OUTPUT);
  pinMode(vm3, OUTPUT);
  pinMode(vm4, OUTPUT);
  pinMode(vm5, OUTPUT);
  pinMode(vm6, OUTPUT);
  pinMode(vm7, OUTPUT);
  pinMode(vm8, OUTPUT);
  pinMode(vd1, OUTPUT);
  pinMode(vd2, OUTPUT);
  pinMode(vd3, OUTPUT);
  pinMode(vd4, OUTPUT);
  pinMode(vd5, OUTPUT);
  pinMode(vd6, OUTPUT);
  pinMode(vd7, OUTPUT);
  pinMode(vd8, OUTPUT);
  pinMode(am1, OUTPUT);
  pinMode(am2, OUTPUT);
}


//inicio no programada, inicialmente sinal amarelo intermitente.
void loop()
{
  saida(am1, 1);
  saida(am2, 1);
  delay(500);
  saida(am1, 0);
  saida(am2, 0);
  delay(500);
  saida(am1, 1);
  saida(am2, 1);
  delay(500);
  saida(am1, 0);
  saida(am2, 0);
  delay(500);
  saida(am1, 1);
  saida(am2, 1);
  delay(500);
  saida(am1, 0);
  saida(am2, 0);
  delay(500);
  //loop infinito até desliga o sistema, inicio do sinal verde/vermelho
  while(true)
  {
    //tela1
    saida(vm1, 1);
    saida(vm4, 1);
    saida(vd5, 1);
    saida(vd8, 1);
    delay(2000);
    //tela2
    saida(vd5, 0);
    saida(vd6, 1);
    delay(2000);
    //tela3
    saida(vd6, 0);
    saida(vd7, 1);
    delay(2000);
    //tela4
    saida(vd7, 0);
    saida(vm1, 0);
    saida(vm2, 1);
    delay(2000);
    //tela5
    saida(vm2, 0);
    saida(vm3, 1);
    saida(vd8, 0);
    saida(am2, 1);
    delay(2000);
    //tela6
    saida(vm3, 0);
    saida(am2, 0);
    saida(vm5, 1);
    saida(vm8, 1);
    
    delay(2000);
    //tela7
    saida(vm4, 0);
    saida(vd1, 1);
    saida(vd4, 1);
    delay(2000);
    //tela 8
    saida(vd1, 0);
    saida(vd2, 1);
    delay(2000);
    //tela 9
    saida(vd2, 0);
    saida(vd3, 1);
    delay(2000);
    //tela10
    saida(vd3, 0);
    saida(vd4, 1);
    saida(vm5, 0);
    saida(vm6, 1);
    delay(2000);
    //tela 11
    saida(vd4, 0);
    saida(am1, 1);
    saida(vm6, 0);
    saida(vm7, 1);
    delay(2000);
    //tela12
    saida(am1, 0);
    saida(vm1, 1);
    saida(vm4, 1);
    saida(vm7, 0);
    delay(2000);
    saida(vm8, 0);
    
    
   
  }
    
  
  
}