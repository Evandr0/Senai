/*Formula Kelvin para Fahrenheith
(0 K − 273,15) × 9/5 + 32 = -459,7 °F

*/

float c, f, k;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a temperatura em Celsius: ");
    c = le_numero_quebrado();
    Serial.println(c);
    f = (c*9/5)+32;
    k = (c+273.15);
    Serial.print(c);
    Serial.print(" Celsius convertidos para Graus Fahrenheith eh: ");
    Serial.println(f);
    Serial.print(c);
    Serial.print(" Celsius convertidos para Graus Kelvin eh: ");
    Serial.println(k);
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