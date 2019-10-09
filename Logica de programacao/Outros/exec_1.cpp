int A = 10, B = 20, C;
String qq;

void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.println("Digite qualquer coisa para o programa iniciar.");
    separador();
    qq = le_nome();
    Serial.print("Primeiramente o valor de A eh: ");
    Serial.println(A);
    Serial.print("e o valor de B eh: ");
    Serial.println(B);
    C = A;
    A = B;
    B = C;

    Serial.print("Agora A vale: ");
    Serial.println(A);
    Serial.print("e B vale: ");
    Serial.println(B);
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