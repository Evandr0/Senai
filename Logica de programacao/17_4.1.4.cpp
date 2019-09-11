/*Formula Fahrenheith para Kelvin
(F − 32) × 5/9 + 273,15

*/

float c, f, k;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a temperatura em Fahrenheith: ");
    f = le_numero_quebrado();
    Serial.println(f);
    k = (f-32)*5/9+273.15;
    Serial.print(f);
    Serial.print(" Fahrenheith convertidos para Kelvin eh: ");
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