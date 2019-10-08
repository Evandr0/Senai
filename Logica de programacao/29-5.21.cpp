/*Descobrir se IMC esta ok.*/

float peso, IMC, altura;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite o seu peso atual: ");
    peso = le_numero_quebrado();
    Serial.println(peso);
    Serial.print("Digite o sua altura atual: ");
    altura = le_numero_quebrado();
    Serial.println(altura);
    IMC = peso / (altura*altura);
    Serial.print("IMC eh igual a: ");
    Serial.println(IMC);

    if (IMC < 18.5){
        Serial.println(" Voce esta abaixo do peso.");
    } else if (IMC >= 18.5 && IMC <= 24.9){
        Serial.println(" Voce esta com peso ideal.");
    } else if (IMC >= 25 && IMC <= 29.9) {
        Serial.println(" Voce esta com sobrepeso.");
    } else if (IMC >= 30 && IMC <= 34.9) {
        Serial.println(" Obesidade grau 1.");
    } else if (IMC >= 35 && IMC <= 39.9){
        Serial.println(" Obesidade grau 2.");
    } else {
        Serial.println(" Obesidade grau 3.");
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