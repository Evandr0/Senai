unsigned int nmenor=65535, nmaior=0, cont, numero;

void setup() {
    Serial.begin(9600);

}

void loop() {

    Serial.print("Digiteo numero");
    numero = le_numero();
    nmenor = numero;
    nmaior = numero;

    
    for(cont = 1; cont <=14; cont++){
        Serial.print("Digite o numero");
        numero = le_numero();
        Serial.println(numero);

        if(numero < nmenor){
            nmenor = numero;
        } else if (numero > nmaior){
            nmaior = numero;
        } else {
            Serial.println("Sao Iguais.");//asd
        }

    }
    Serial.print("O numero menor eh:");
    Serial.println(nmenor);
    Serial.print("O numero maior eh:");
    Serial.println(nmaior);



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