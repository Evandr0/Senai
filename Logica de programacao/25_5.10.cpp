/*Este programa calcula IMC de uma pessoa..*/
//
float altura, peso;
int genero;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Este programa calcula seu IMC.");
    Serial.println("Selecione 1 para genero Feminino.");
    Serial.println("Selecione 2 para genero Masculino.");
    genero = le_numero();
    Serial.print("Genero = ");
    Serial.println(genero);

    if (genero > 0 && genero <=2){
        Serial.print("Digite sua altura: ");
        altura = le_numero_quebrado();
        Serial.println(altura);
    

        if (genero == 1){
            Serial.println("========================================");
            Serial.println("Genero escolhido: FEMININO.");
            Serial.print("Sua altura eh: ");
            Serial.println(altura);
            Serial.print("Seu peso ideal eh: ");
            peso = 62.1*altura-44.7;
            Serial.println(peso);
            Serial.println("========================================");
        } else {
            Serial.println("========================================");
            Serial.println("Genero escolhido: MASCULINO.");
            Serial.print("Sua altura eh: ");
            Serial.println(altura);
            Serial.print("Seu peso ideal eh: ");
            peso = 72.7*altura-58;
            Serial.println(peso);
            Serial.println("========================================");
        } 
    }else {
            Serial.println("========================================");
            Serial.println("Genero escolhido eh invalido!!");
            Serial.println("========================================");
        }


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