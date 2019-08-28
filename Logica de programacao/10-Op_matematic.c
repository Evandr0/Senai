#define escreve Serial.print
#define escreveln Serial.println

int dias;
float salario_diario;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    escreve("Digite quanto voce ganha por Mes: ");
    salario_diario = le_numero_quebrado();
    escreveln(salario_diario);
    escreve("Digite quantos dias no mes voce trabalha: ");
    dias = le_numero();
    escreveln(dias);
    escreve("Seu salario diario eh: ");
    salario_diario = salario_diario/dias;
    escreveln(salario_diario);
    escreveln("#######################");




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