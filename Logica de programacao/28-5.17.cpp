/*Imposto de renda Paulo GueDEV
    Calcular IR nos modelos atuais e futuro.*/
void setup() {
    Serial.begin(9600);
}

void loop() {
    float salario, salariobase;
    
    salariobase = 998;
    separador();
    Serial.print("Digite seu salario: ");
    salario = le_numero_quebrado();
    Serial.println(salario);

    separador();
    Serial.println("Calculo para IR Atual.");
    if(salario < 1903.99){
        Serial.println("ISENTO");
        separador();
    } else if (salario >= 1903.99 && salario <= 2826.65){
        Serial.print("Jucca tera de pagar 7.5% de IR, portanto recebera: R$");
        salario = salario*0.925;
        Serial.println(salario);
        separador();
    } else if (salario > 2826.65 && salario <= 3751.05){
        Serial.print("Jucca tera de pagar 15% de IR, portanto recebera: R$");
        salario = salario*0.75;
        Serial.println(salario);
        separador();
    } else if (salario > 3751.06 && salario <= 4664.68){
        Serial.print("Jucca tera de pagar 22.5% de IR, portanto recebera: R$");
        salario = salario*0.775;
        Serial.println(salario);
        separador();
    } else {
        Serial.print("Jucca tera de pagar 27.5% de IR, portanto recebera: R$");
        salario = salario*0.725;
        Serial.println(salario);
        separador();
    }
    separador();

    Serial.println("Calculo para IR Paulo GueDEV.");
    if (salario <= salariobase*6){
        Serial.println("ISENTO");
        separador();
    } else {
        Serial.print("Jucca tera de pagar 20% de IR, portanto recebera: R$");
        salario = salario*0.80;
        Serial.println(salario);
        separador();
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