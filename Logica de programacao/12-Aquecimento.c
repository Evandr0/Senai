/*Este programa calcula a area de um Circulo
O usuário deve fornecer a distância do Raio*/

float area, raio;
float pi = 3.14159;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("Vamos calcular a area de um circulo.\nDigite a distancia do Raio: ");
    raio = le_numero_quebrado();
    Serial.println(raio);
    area = pi*(raio*raio);
    Serial.print("A area do circulo eh: ");
    Serial.println(area);
    Serial.println("===============================\n");
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