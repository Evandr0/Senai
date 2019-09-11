
int pontos;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Este programa le uma pontuacao e informa como um jogador esta se saindo");
    Serial.print("Digite a sua pontuacao: ");
    pontos = le_numero();
    Serial.println(pontos);
    if (pontos <= 10){
        Serial.println("Deu ruim");
    } else if (pontos > 10 && pontos <=100) {
        Serial.println("Ta.. continue tentando, voce chegara lah");
    } else if (pontos > 100 && pontos <= 200) {
        Serial.println("Supimpa");
    } else {
        Serial.println("MITOU");
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