
int numero1, numero2;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite o numero 1: ");
    numero1 = le_numero();
    Serial.println(numero1);
    Serial.print("Digite o numero 2: ");
    numero2 = le_numero();
    Serial.println(numero2);
    if (numero1 > numero2){
        Serial.println("O numero 1 eh maior que o numero 2");
    } else if (numero1 < numero2){
        Serial.println("O numero 2 eh maior que o numero 1");
    } else {
        Serial.println("O numero 1 eh igual ao numero 2");
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