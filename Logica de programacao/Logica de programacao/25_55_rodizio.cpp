/*Este programa le o ultimo numero da placa do sujeito e informa os dias que ele não pode andar com o seu carro*/
int placa;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite o ultimo numero da placa do seu carro: ");
    placa = le_numero();
    Serial.println(placa);
    if (placa <=9 && placa >= 0){
      if (placa == 0 | placa == 1){
        Serial.println("Voce nao pode 'rodar' na segunda-feira.");
      } else if (placa == 2 | placa == 3) {
        Serial.println("Voce nao pode 'rodar' na terca-feira.");
      } else if (placa == 4 | placa == 5) {
        Serial.println("Voce nao pode 'rodar' na quarta-feira.");
      } else if (placa == 6 | placa == 7) {
        Serial.println("Voce nao pode 'rodar' na quinta-feira.");
      } else {
        Serial.println("Voce nao pode 'rodar' na sexta-feira.");
      }
    } else {
      Serial.println("ERRO!! Voce deve digitar um numero de  0 a 9");
    }


    
    
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