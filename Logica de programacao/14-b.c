/*Programa calcula a media de dois números.
Ex: Numero 37.PNG*/
float nota1, nota2, media;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("\nDigite a primeira nota: ");
    nota1 = le_numero_quebrado();
    Serial.println(nota1);
    Serial.print("Digite a segunda nota: ");
    nota2 = le_numero_quebrado();
    Serial.println(nota2);
    media = (nota1+nota2)/2;
    Serial.print("A sua media eh: ");
    Serial.println(media);

    if( media >= 7 ){
        Serial.println("Passou!");
    } else {
        Serial.println("Recuperacao!");
    }


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
