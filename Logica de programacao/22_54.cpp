
float descontoassociado = 0, desconto = 0, multa = 0, total, valor1;
String nome, convenios, s, n, imprimir;
int dias; 

//==================== Desconto por tempo ====================
int diaria1 = 5, diaria2 = 10, diaria3 = 11;

//==================== Valor das diarias =====================
int d1 = 100, d2 = 90, d3 = 80;
//============================================================

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("=============================================================");
    Serial.print("Digite o nome do cliente: ");
    nome = le_nome();
    Serial.println(nome);
    Serial.print("Digite quantos dias o Cliente ficou hospedado: ");
    dias = le_numero();
    Serial.println(dias);
    Serial.print("Cliente tem convenio Uber? s ou n? Resp: ");
    convenios = le_nome();
    Serial.println(convenios);
    Serial.print("Digite qual a porcentagem do desconto adicional? Resp: ");
    desconto = le_numero();
    Serial.println(desconto);
    Serial.print("Cliente obteve algum acrescimo? Multa? Digite o valor Resp: ");
    multa = le_numero();
    Serial.println(multa);
    
    //Aplica desconto Uber 15% se a resposta for s.
    if (convenios == "s") {
        descontoassociado = 15;
    } else {
        descontoassociado = 0;
    }
    if (dias <= diaria1) {
        total = (dias*d1);
        descontoassociado = (total*descontoassociado)/100;
        total = total - descontoassociado;
        desconto = (total*desconto)/100;
        total = total - desconto + multa;
    } else if (dias <= diaria2) {
        total = (dias*d2);
        descontoassociado = (total*descontoassociado)/100;
        total = total - descontoassociado;
        desconto = (total*desconto)/100;
        total = total - desconto + multa;
    } else {
        total = (dias*d3);
        descontoassociado = (total*descontoassociado)/100;
        total = total - descontoassociado;
        desconto = (total*desconto)/100;
        total = total - desconto + multa;
    }
    Serial.println("=======================Total================================");
    Serial.print("Cliente: ");
    Serial.println(nome);
    Serial.print("Dias hospedado: ");
    Serial.println(dias);
    Serial.print("Desconto Uber: ");
    Serial.println(descontoassociado);
    Serial.print("Outros descontos: ");
    Serial.println(desconto);
    Serial.print("Total de acrescimos/multas: ");
    Serial.println(multa);
    Serial.print("Total a pagar: ");
    Serial.println(total);
    Serial.println("=============================================================");
    Serial.print("Deseja imprimir? s ou n");
    imprimir = le_nome();
    Serial.println(imprimir);
        if (imprimir == "s") {
        Serial.println("Imprimindo... dirija-se a impressora.");
        Serial.println("=============================================================");
        delay(500);
        Serial.print("===============================");
        delay(500);
        Serial.println("==============================");
        delay(500);
        Serial.print("===============================");
        delay(500);
        Serial.println("==============================");
        delay(500);
        Serial.print("===============================");
        delay(500);
        Serial.println("==============================");
        delay(500);
    } else {
        Serial.println("Obrigado, voce economizou papel.");
        Serial.println("=============================================================");
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