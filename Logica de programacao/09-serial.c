//[09] - Template para receber valores pela serial...
#define escreveln Serial.println
#define escreve Serial.print
float valor1, valor2;


void setup() 
{
Serial.begin(9600);
delay(100);
}

void loop() 
{
    escreve("Digite a nota 1: ");
    valor1 = le_numero_quebrado(); 
    escreveln(valor1);
    escreve("Digite a nota 2: ");
    valor2 = le_numero_quebrado();
    escreveln(valor2);
    escreve("A media e: ");
    escreveln((valor1 +valor2) / 2);  
    escreveln("##########################");
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