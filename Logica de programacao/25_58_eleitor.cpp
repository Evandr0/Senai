/*Este programa faz validação de idade e informa se a pessoa pode votar...*/
int idade;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Digite sua idade: ");
    idade = le_numero();
    if (idade < 16 && idade >= 0) {
        Serial.println("=================================================");
        Serial.println("Voce nao pode votar.");
        Serial.println("=================================================");
    } else if (idade >= 16 && idade <=17 | idade > 65) {
        Serial.println("=================================================");
        Serial.println("Voto facultativo.");
        Serial.println("=================================================");
    } else if (idade >= 18 && idade <= 65) {
        Serial.println("=================================================");
        Serial.println("Voto OBRIGATORIO.");
        Serial.println("=================================================");
    } else {
        Serial.println("=================================================");
        Serial.println("Idade invalida!.");
        Serial.println("=================================================");
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