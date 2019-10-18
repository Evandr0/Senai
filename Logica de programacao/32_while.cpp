/* Postem aí a solução daquele problema hipotético:
- 1 botão pra piscar o led 10x
- 1 botao pra piscar 30x;
- 1 botao pra piscar 5x, mas contando regressivamente (cont--)*/
#define btn1 2
#define btn2 3
#define btn3 4
#define led1 5
#define led2 6
#define led3 7
#define saida digitalWrite
#define entrada digitalRead
int cont = 1;

void setup() {
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(btn1, INPUT);
    pinMode(btn2, INPUT);
    pinMode(btn3, INPUT);
}

void loop() {
    if (entrada(btn1) == 1){
        while(cont <=10){
            //piscar led 10x
            saida(led1, 1);
            delay(1000);
            saida(led1, 0);
            delay(1000);
            cont++;
        }
    }
    if (entrada(btn2) == 1){
        while(cont <=30){
            //piscar led 30x
            saida(led2, 1);
            delay(1000);
            saida(led2, 0);
            delay(1000);
            cont++;
        }
    }
    if (entrada(btn3) == 1){
        cont = 5;
        while(cont > 0){
            //piscar led 5x
            saida(led3, 1);
            delay(1000);
            saida(led3, 0);
            delay(1000);
            cont--;
        }
    }
   

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