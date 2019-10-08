/* Ler valor do produto X que queremos comprar. e ler quantidade de moedas guardadas e verificar
se o valor cabe no orçamento.*/

int moeda1, moeda2, moeda3, moeda4, moeda5;
float total, produto;
void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite o valor do produto que deseja comprar: R$");
    produto = le_numero_quebrado();
    Serial.println(produto);
    Serial.print("Digite quantas moedas de R$1 voce tem: ");
    moeda1 = le_numero();
    Serial.println(moeda1);
    Serial.print("Digite quantas moedas de R$0.50 voce tem: ");
    moeda2 = le_numero();
    Serial.println(moeda2);
    Serial.print("Digite quantas moedas de R$0.25 voce tem: ");
    moeda3 = le_numero();
    Serial.println(moeda3);
    Serial.print("Digite quantas moedas de R$0.10 voce tem: ");
    moeda4 = le_numero();
    Serial.println(moeda4);
    Serial.print("Digite quantas moedas de R$0.05 voce tem: ");
    moeda5 = le_numero();
    Serial.println(moeda5);

    total = moeda1*1 + moeda2*0.50 + moeda3*0.25 + moeda4*0.10 + moeda5*0.05;
    Serial.print("Voce tem no 'cofrinho' o total de R$");
    Serial.println(total);
    Serial.print("O valor do produto eh: R$");
    Serial.println(produto);

    if (produto <= total) {
        Serial.println("Voce pode comprar o produto desejado.");
    } else {
        Serial.println("Voce NAO pode comprar o produto ainda, guarde mais dinheiro.");
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
/*CopyRigth By Evandro   -- 2019*/