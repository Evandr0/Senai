/*Formula Kelvin para Celsius
0 K − 273,15 = -273,1 °C

*/

float c, f, k;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a temperatura em Kelvin: ");
    k = le_numero_quebrado();
    Serial.println(k);
    c = k-273.15;
    Serial.print(k);
    Serial.print(" Kelvin convertidos para Graus Celsius eh: ");
    Serial.println(c);
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