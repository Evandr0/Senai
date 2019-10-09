/*Ler idade da pessoa em Anos, meses e dias e escrever idade apenas em dias.*/

int anos, meses, dias;

void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.println("Digite sua idade expressa em Anos, meses e dias.");
    Serial.print("Primeiramente digite Anos: ");
    anos = le_numero();
    Serial.println(anos);
    Serial.print("Quantos Meses? ");
    meses = le_numero();
    Serial.println(meses);
    Serial.print("e quantos Dias? ");
    dias = le_numero();
    Serial.println(dias);

    anos = anos*365;
    meses = meses*30;
    dias = dias + anos + meses;
    Serial.print("Transformando sua idade para dias isso equivale ah: ");
    Serial.println(dias);
    

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