/*Este programa le o  numero da palestra e informa o local para o mano Juca*/
int palestra;
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("=================================================");
    Serial.println("Digite o numero da palestra para saber o local: ");
    Serial.println("1 = Animacoes com Scratch.  | 2 = Scratch para games.");
    Serial.println("3 = JavaScript para leigos. | 4 = Topicos avancados de JS.");
    Serial.println("5 = Vida e carreira.");
    Serial.println("=================================================");
    palestra = le_numero();
    Serial.println(palestra);
    if (palestra <=5 && palestra >= 1){
      if (palestra ==  1){
            Serial.println("=================================================");
            Serial.println("Palestra escolhida: Animacoes com Scratch.");
            Serial.println("Local: LAB 305, Horario: 19h.");
            Serial.println("=================================================");
        } else if (palestra == 2){
            Serial.println("=================================================");
            Serial.println("Palestra escolhida: Scratch para games.");
            Serial.println("Local: LAB 512, Horario: 20h.");
            Serial.println("=================================================");
        } else if (palestra == 3) {
            Serial.println("=================================================");
            Serial.println("Palestra escolhida: JavaScript para leigos.");
            Serial.println("Local: LAB 101, Horario: 19h.");
            Serial.println("=================================================");
        } else if (palestra == 4 ){
            Serial.println("=================================================");
            Serial.println("Palestra escolhida: Topicos avancados de JS.");
            Serial.println("Local: LAB 305, Horario: 20h.");
            Serial.println("=================================================");
        } else {
            Serial.println("=================================================");
            Serial.println("Palestra escolhida: Vida e carreira.");
            Serial.println("Local: Auditorio, Horario: 21h.");
            Serial.println("=================================================");
        }
    } else {
        Serial.println("ERRO! Digite um numero entre 1 e 5.");
    }



    
    
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