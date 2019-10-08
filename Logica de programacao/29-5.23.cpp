/*Valor da compra < 20 = 45% de lucro se nao 30% de lucro*/

float produto;
void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite o valor do produto: R$");
    produto = le_numero_quebrado();
    Serial.println(produto);

    if (produto < 20){
        Serial.println("Dado que o valor do produto eh inferior a R$20, aplicar 45% de lucro");
        produto = produto + produto *0.45;
    } else {
        produto = produto + produto *0.30;
        Serial.println("Dado que o valor do produto eh superior a R$20, aplicar 30% de lucro");
    }
    Serial.print("Valor final do produto sera: R$");
    Serial.println(produto);


  
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