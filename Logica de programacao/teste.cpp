
#define saida digitalWrite

void setup()
{
    pinMode(12, OUTPUT);
}

void loop() {
  la();
  delay(500);
  la();
  delay(500);
  la();
  delay(500);
  fa();
  delay(10000);

}
// LA-LA-LA-FA-DO-LA-FA-DO-LA MI-MI-MI-FA-DO-SOL#-FA-DO-LA
void la(){
  saida(12, 1);
  delay(5);
  saida(12, 0);
  delay(5);
  saida(12, 1);
  delay(5);
  saida(12, 0);
  delay(5);  
  saida(12, 1);
  delay(5);
  saida(12, 0);
  delay(5);
  saida(12, 1);
  delay(5);
  saida(12, 0);
  delay(5);
  saida(12, 1);
  delay(5);
  saida(12, 0);
  delay(5);  
}
void fa(){
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);
  saida(12, 1);
  delay(8);
  saida(12, 0);
  delay(8);

}