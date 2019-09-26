/*Ler a distancia. e informar o tempo que vai levar para chegar em um determinado local na velocidade da luz..*/
// 1 ano luz = 9.461.000.000.000 KM
//      long = 2.147.483.647
float distancia, segundos, horas, dias, minutos, meses, anos, resto, segundos2, rminutos, rhoras, rdias, rmeses, ranos, rsegundos;
int tint;
long velocidadeluz = 299792; //em km por segundo
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.print("Digite a distancia em KM: ");
    distancia = le_numero_quebrado();
    Serial.println(distancia);
    segundos = distancia/velocidadeluz;
    segundos2 = segundos; //calculo segundos.
    //segundos = (minutos - int(minutos))*60;
    //resto = (segundos - int(segundos))*1000; //calculo milisegundos.
    Serial.print("Total em segundos = ");
    Serial.println(segundos);

    minutos = segundos/60;
    horas = minutos/60;
    dias = horas/24;
    meses = dias/30;
    anos = meses/12;

    Serial.print("O tempo para percorer ");
    Serial.print(distancia);
    Serial.print(" KM levara\n");
    Serial.print(anos);
    Serial.print(" anos. \nOu ");
    Serial.print(meses);
    Serial.print(" meses. \nOu ");
    Serial.print(dias);
    Serial.print(" dias. \nOu ");
    Serial.print(horas);
    Serial.print(" horas. \nOu ");
    Serial.print(minutos);
    Serial.print(" minutos. \nOu ");
    Serial.print(segundos);
    Serial.println(" segundos.");

    separador();
    separador();


    Serial.println("Teste numero 2.");



    rminutos = (minutos - int(minutos))* 60; //resultado em segundos quando minuto der numero quebrado.
    rdias = int(horas);
    //hora vale 1.14

    rhoras = int(dias/30); //38/30 = 1.26
    
    rminutos = (horas - int(horas))*60; // =8.4 minutos
    rsegundos = (rminutos - int(rminutos))*60; // rsegundos = segundos.
    
    if (segundos2 < 60)  {
        Serial.print("Tempo em segundos: ");
        Serial.println(segundos);
    } else if (segundos2 > 60 && segundos2 < 3600) { //1min até 1 hora
        Serial.print("Tempo em minutos: ");
        Serial.println(minutos);
        Serial.print("segundos: ");
        Serial.println(segundos);
    } else if (segundos2 > 3600 && segundos2 <  86400) { //1 horas até 1 dia
        Serial.print("Tempo em horas: ");
        Serial.println(int(horas));
        Serial.print("Tempo em minutos: ");
        Serial.println(int(rminutos));
        Serial.print("segundos: ");
        Serial.println(rsegundos);
    } else if (segundos2 > 86400 && segundos2 < 2592000) { //1dias até 30 dias
        Serial.print("Tempo em dias: ");
        Serial.println(int(dias));
        Serial.print("Tempo em horas: ");
        Serial.println(int(rhoras));
        Serial.print("Tempo em minutos: ");
        Serial.println(int(rminutos));
        Serial.print("segundos: ");
        Serial.println(rsegundos);
    } else if (segundos2 > 2592000 && segundos2 < 31104000){ //30 dias ateh 12 meses
        Serial.print("Tempo em meses: ");
        Serial.println(int(meses));
        Serial.print("Tempo em dias: ");
        Serial.println(int(rdias));
        Serial.print("Tempo em horas: ");
        Serial.println(int(rhoras));
        Serial.print("Tempo em minutos: ");
        Serial.println(int(rminutos));
        Serial.print("segundos: ");
        Serial.println(rsegundos);
    } else {
        Serial.print("Tempo em anos: ");
        Serial.println(int(anos));
        Serial.print("Tempo em meses: ");
        Serial.println(int(meses));
        Serial.print("Tempo em dias: ");
        Serial.println(int(rdias));
        Serial.print("Tempo em horas: ");
        Serial.println(int(rhoras));
        Serial.print("Tempo em minutos: ");
        Serial.println(int(rminutos));
        Serial.print("segundos: ");
        Serial.println(rsegundos);
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