/*Ler a distancia. e informar o tempo que vai levar para chegar em um determinado local na velocidade da luz..*/

float distancia, t, resto;
int tint;
long velocidadeluz = 299792; //em km por segundo
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Este programa ira calcular o tempo de viagem caso o deslocamento se de na velocidade da luz.");
    Serial.print("Informa a distancia em KM: ");
    distancia = le_numero_quebrado();
    Serial.println(distancia);
    t = distancia/velocidadeluz;
    tint = int(t);
    Serial.print("Tempo em segundos sera: ");
    Serial.println(t);
    if (t > 60){
        t = t/60;
        resto = tint -t;
        Serial.print("Tempo em minutos: ");
        Serial.println(t); //tempo em minutos
        Serial.print("quanto vale o tint: ");
        Serial.println(tint);
        Serial.print("Resto vale: ");
        Serial.println(resto);
    }
    



}

void separador(){
    Serial.println("============================================");
}

/**
 * Função que lê uma string da Serial
 * e retorna-a
 */
String le_nome(){
  String conteudo = "";
  char caractere;
  while(Serial.available() == 0);
  // Enquanto receber algo pela serial
  while(Serial.available() > 0) {
    // Lê byte da serial
    caractere = Serial.read();
    // Ignora caractere de quebra de linha
    if (caractere != '\n'){
      // Concatena valores
      conteudo.concat(caractere);
    }
    // Aguarda buffer serial ler próximo caractere
    delay(10);
  }
  return conteudo;
}


int le_numero()
{
String conteudo = "";
char caractere;
int valor;
while(Serial.available() == 0);
// Enquanto receber algo pela serial
while(Serial.available() > 0) {
// Lê byte da serial
caractere = Serial.read();
// Ignora caractere de quebra de linha
if (caractere != '\n'){
// Concatena valores
conteudo.concat(caractere);
}
// Aguarda buffer serial ler próximo caractere
delay(10);
}
valor = conteudo.toInt(); 
return valor;
}

float le_numero_quebrado()
{
String conteudo = "";
char caractere;
float valor;
while(Serial.available() == 0);
// Enquanto receber algo pela serial
while(Serial.available() > 0) {
// Lê byte da serial
caractere = Serial.read();
// Ignora caractere de quebra de linha
if (caractere != '\n'){
// Concatena valores
conteudo.concat(caractere);
}
// Aguarda buffer serial ler próximo caractere
delay(10);
}
valor = conteudo.toFloat(); 
return valor;
}