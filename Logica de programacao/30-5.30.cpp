/**/
int resto, numero;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite o numero desejado: ");
    numero = le_numero();
    Serial.println(numero);

    if (numero > 0){
        Serial.println("Numero eh positivo.");
    } else if (numero < 0) {
        Serial.println("Numero eh negativo.");
    } else {
        Serial.println("Numero eh nulo");
    }
    
    resto = numero % 2;

    if(resto == 0){
        Serial.println("O numero eh par.");
    } else {
        Serial.println("O numero eh impar.");
    }   


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