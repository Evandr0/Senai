/* Uma fruteira está vendendo frutas com a seguinte tabela de preços:
Até 5 Kg -----------------Acima de 5 Kg
Morango R$ 2,50 por Kg R$ 2,20 por Kg
Maçã    R$ 1,80 por Kg R$ 1,50 por Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá
ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de
morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente. .*/

float kgmaca, kgmorango, totalkg, totalmorango, totalmaca, precomaca, precomorango, precofinal;

void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite quantos Kg de Morango: ");
    kgmorango = le_numero_quebrado();
    Serial.print(kgmorango);
    Serial.println("Kg");
    Serial.print("Digite quantos Kg de maca: ");
    kgmaca = le_numero_quebrado();
    Serial.print(kgmaca);
    Serial.println("Kg");
    totalkg = kgmorango + kgmaca;

    if(kgmorango <= 5){
        precomorango = 2.50;
    } else {
        precomorango = 2.20;
    }
    if(kgmaca <= 5){
        precomaca = 1.80;
    } else {
        precomaca = 1.50;
    }
    totalmaca = precomaca*kgmaca;
    totalmorango = precomorango*kgmorango;

    precofinal = totalmaca+totalmorango;

    if (totalkg > 8 || totalmaca+totalmorango > 25){
        precofinal = precofinal - precofinal*0.10;
        Serial.println("Cliente ganhou desconto de 10%");
    }

    Serial.print("Total a ser pago pelo cliente: R$");
    Serial.println(precofinal);
    separador();
    

}

void separador(){
    Serial.println("============================================");
}

int le_numero(){
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
long le_numero_long(){
    String conteudo = "";
    char caractere;
    long valor;
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

float le_numero_quebrado(){
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