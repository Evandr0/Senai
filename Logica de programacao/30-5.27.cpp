/*Formula Celsius para kelvin
0 °C + 273,15 = 273,15 K
*/

int menu;
float c, f, k;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Digite o conversor desejado: ");
    Serial.println("Digite 1 para converter Celsius para Fahrenheith.");
    Serial.println("Digite 2 para converter Fahrenheith para Celsius.");
    menu = le_numero();

    if (menu == 1){
        celsius_fare();
    } else if (menu == 2 ){
        fare_celsius();
    }




}

void celsius_fare() {
    Serial.print("Digite a temperatura em Celsius: ");
    c = le_numero();
    Serial.println(c);
    f = (c*9/5)+32;
    Serial.print(c);
    Serial.print(" Graus Celsius convertidos para Fahrenheith eh: ");
    Serial.println(f);
}
void fare_celsius() {
    Serial.print("Digite a temperatura em Fahrenheith: ");
    f = le_numero_quebrado();
    Serial.println(f);
    c = (f-32)/1.8;
    Serial.print(f);
    Serial.print("Fahrenheith convertidos para Celsius eh: ");
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