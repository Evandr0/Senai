/*Nota e conceitos
Calcular media de 2 notas e informar media conceito e se aprovado se conceito A B ou C = Aprovado.
9.0 e 10 = A
7.5 e 9.0 = B
6.0 e 7.5 = C
4.0 e 6.0 = D
4.0 e 0 =   E*/

float nota1, nota2, media;

void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite a nota 1: ");
    nota1 = le_numero_quebrado();
    Serial.println(nota1);
    Serial.print("Digite a nota 2: ");
    nota2 = le_numero_quebrado();
    Serial.println(nota2);
    media = (nota1+nota2)/2;

    if (media <= 10 && media >= 9.0){
        Serial.print("Aluno esta aprovado e obteve conceito A, media final: ");
        Serial.println(media);
    } else if (media < 9.0 && media >= 7.5){
        Serial.print("Aluno esta aprovado e obteve conceito B, media final: ");
        Serial.println(media);
    } else if (media < 7.5 && media >= 6.0){
        Serial.print("Aluno esta aprovado e obteve conceito C, media final: ");
        Serial.println(media);
    } else if (media < 6.0 && media >= 4.0) {
        Serial.print("Aluno esta reprovado e obteve conceito D, media final: ");
        Serial.println(media);
    } else {
        Serial.print("Aluno esta reprovado e obteve conceito E, media final: ");
        Serial.println(media);
    }

  
}

void separador(){
    Serial.println("============================================");
}

/**
 * Função que lê uma string da Serial
 * e retorna-a
 */
String le_nome(){
  String conteudo = "";
  char caractere;
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
  return conteudo;
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
/*CopyRigth By Evandro   -- 2019*/