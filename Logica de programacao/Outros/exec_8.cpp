/* Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
de eleitores..*/

unsigned long validos, eleitores, brancos, nulos;

void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite o numero de eleitores: ");
    eleitores = le_numero_long();
    Serial.println(eleitores);
    Serial.print("Digite o numero de votos validos: ");
    validos = le_numero_long();
    Serial.println(validos);
    Serial.print("Digite o numero de votos nulos: ");
    nulos = le_numero_long();
    Serial.println(nulos);
    Serial.print("Digite o numero de votos em branco: ");
    brancos = le_numero_long();
    Serial.println(brancos);

    validos = (validos*100) / eleitores;
    nulos = (nulos*100)/eleitores;
    brancos = (brancos*100)/eleitores;

    Serial.print("Votos validos: ");
    Serial.print(validos);
    Serial.println("%");
    Serial.print("Votos nulos: ");
    Serial.print(nulos);
    Serial.println("%");
    Serial.print("Votos em branco: ");
    Serial.print(brancos);
    Serial.println("%");


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