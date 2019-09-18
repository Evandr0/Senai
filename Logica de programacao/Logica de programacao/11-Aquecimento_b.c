/*Este programa calcula a area de um Triângulo
O usuário deve fornecer a distância da base e altura*/
float area, base, altura;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("Vamos calcular a area de um triangulo.\nDigite a distancia da base: ");
    base = le_numero_quebrado();
    Serial.println(base);
    Serial.print("Digite a altura do triangulo: ");
    altura = le_numero_quebrado();
    Serial.println(altura);
    area = (base*altura)/2;
    Serial.print("A area do triangulo eh: ");
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