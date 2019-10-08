int numero, resto, v1,v2,v3;
void setup() {
    Serial.begin(9600);
}

void loop() {
    v1 = 1, v2 =2, v3 =3;
    separador();
    Serial.print("Digite um numero: ");
    numero = le_numero();
    Serial.println(numero);
    
    resto = numero % 10;
    if (resto == 0){
        Serial.println("Numero eh divisivel por 10.");
    } else {
        v1 = 1;
    }
    resto = numero % 5;
    if (resto == 0){
        Serial.println("Numero eh divisivel por 5.");
    } else {
        v2 =1;
    }
    resto = numero % 2;
    if (resto == 0){
        Serial.println("Numero eh divisivel por 2.");
    } else {
        v3 = 1;
    }
    if (v1 == v2 == v3) {
        Serial.println("Nao eh divisivel por nenhum.");

    }
    separador();


    
}

void separador(){
    Serial.println("============================================");
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