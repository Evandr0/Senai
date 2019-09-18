/*Formula Celsius para fahrenheith
(0 °C × 9/5) + 32 = 32 °F
*/
int c, f, k;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a temperatura em Celsius: ");
    c = le_numero();
    Serial.println(c);
    f = (c*9/5)+32;
    Serial.print(c);
    Serial.print(" Graus Celsius convertidos para Fahrenheith eh: ");
    Serial.println(f);
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