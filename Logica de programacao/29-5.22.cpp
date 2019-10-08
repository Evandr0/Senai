/*Escrever o nome de 2 clientes e o valor  que cada um pagou por sua compra.
a) Valor total pago pelos 2 clientes
b) Valor medio das compras efetuadas 
c) os nomes dos clientes que efetuaram compras superiores a 20 reais.*/

String cliente1, cliente2;
float compra_cl1, compra_cl2, total, media;
void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite o nome do cliente 1: ");
    cliente1 = le_nome();
    Serial.println(cliente1);
    Serial.print("Digite o valor da compra do cliente 1: R$");
    compra_cl1 = le_numero_quebrado();
    Serial.println(compra_cl1);
    Serial.print("Digite o nome do cliente 2: ");
    cliente2 = le_nome();
    Serial.println(cliente2);
    Serial.print("Digite o valor da compra do cliente 2: R$");
    compra_cl2 = le_numero_quebrado();
    Serial.println(compra_cl2);
    separador();
    total = compra_cl1+compra_cl2;
    media = total/2;
    Serial.print("Valor total pago pelos clientes: R$");
    Serial.println(total);
    Serial.print("Media do valor das compras: R$");
    Serial.println(media);

    Serial.println("O nome do(s) cliente(s) com compras cima de R$20 ");
    if (compra_cl1 > 20){
        Serial.print("Cliente 1: ");
        Serial.println(cliente1);
    }
    if (compra_cl2 > 20){
        Serial.print("Cliente 2: ");
        Serial.println(cliente2);
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