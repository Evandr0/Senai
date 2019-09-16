
float n1,n2,n3,media;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Este programa le 3 notas com media ponderada e informa se mano Juca passou na materia");
    Serial.print("Digite o nota 1: ");
    n1 = le_numero_quebrado();
    Serial.println(n1);

    Serial.print("Digite a nota 2: ");
    n2 = le_numero_quebrado();
    Serial.println(n2);
    Serial.print("Digite a nota 3: ");
    n3 = le_numero_quebrado();
    Serial.println(n3);

    media = (n1*0.4+n2*0.6+n3*1)/(0.4+0.6+1);
    Serial.print("A media do Jucca eh: ");
    Serial.println(media);

    if (media >= 7){
        Serial.println("Portanto Jucca passou na materia!");
    }else {
        Serial.println("Que pena, Jucca nao passou");
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