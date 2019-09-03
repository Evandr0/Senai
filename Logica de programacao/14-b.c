/*Programa calcula a media de dois números.*/
float numero1, numero2, media;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite o primeiro numero: ");
    numero1 = le_numero();
    Serial.println(numero1);
    Serial.print("Digite o segundo numero: ");
    numero2 = le_numero();
    Serial.println(numero2);
    media = (numero1+numero2)/2;
    Serial.print("A media dos numeros eh: ");
    Serial.println(media);


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
