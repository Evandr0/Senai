/* Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido
um novo valor, ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado
da divisão do primeiro valor lido pelo segundo valor lido. (utilizar a estrutura REPITA).*/

float valor1, valor2;
float result;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite o primeiro valor: ");
    valor1 = le_numero_quebrado();
    Serial.println(valor1);
    Serial.print("Digite o segundo valor: ");
    valor2 = le_numero_quebrado();
    Serial.println(valor2);

    while (valor2 == 0){
        Serial.print("Valor 2 nao pode ser ZERO, digite outro numero: ");
        valor2 = le_numero();
        Serial.println(valor2);
    }
    result = valor1/valor2;

    Serial.print("O resultado da divisao do valor1 pelo valor2 eh: ");
    Serial.println(result);
    
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