int idadePresidente1, idadePresidente2, idadevice1, idadevice2, soma1, soma2;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a idade do candidato a Presidente 1: ");
    idadePresidente1 = le_numero();
    Serial.println(idadePresidente1);
    Serial.print("Digite a idade do candidato a Vice-Presidente 1: ");
    idadevice1 = le_numero();
    Serial.println(idadePresidente1);
    Serial.print("Digite a idade do candidato a Presidente 2: ");
    idadePresidente2 = le_numero();
    Serial.println(idadePresidente2);
    Serial.print("Digite a idade do candidato a Vice-Presidente 2: ");
    idadevice2 = le_numero();
    Serial.println(idadePresidente2);
    soma1 = idadePresidente1 + idadevice1;
    soma2 = idadePresidente2 + idadevice2;

    if (soma1 > soma2){
        Serial.println("Candidatos a Presidente 1 e Vice-Presidente 1 acumulam mais experiencia.");
    } else if (soma1 < soma2) {
        Serial.println("Candidatos a Presidente 2 e Vice-Presidente 2 acumulam mais experiencia.");
    } else {
        Serial.println("A experiencia dos candidatos eh a mesma.");
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