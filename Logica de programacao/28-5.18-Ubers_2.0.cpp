/*Ler a distancia. e informar o tempo que vai levar para chegar em um determinado local na velocidade da luz..*/
// 1 ano luz = 9.461.000.000.000 KM
//      long = 2.147.483.647
double distancia, segundos, horas, dias, minutos, meses, anos, resto, segundos2, rminutos, rhoras, rdias, rmeses, ranos, rsegundos;
int tint;
long velocidadeluz = 299793; //em km por segundo
void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println();
    separador();
    Serial.print("\nDigite a distancia em KM: ");
    distancia = le_numero_quebrado();
    Serial.println(distancia);
    segundos = distancia/velocidadeluz;
    segundos2 = segundos;
    Serial.print("Total em segundos = ");
    Serial.println(segundos);

    minutos = segundos/60;
    horas = segundos/3600;
    dias = segundos/86400;
    meses = segundos/2592000;
    anos = segundos/31104000;

    Serial.print("O tempo para percorer ");
    Serial.print(distancia);
    Serial.print(" KM levara ");
    Serial.print(anos);
    Serial.print(" anos. \nOu ");
    separador();
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


    Serial.println("============ Ou se preferir... =============\n");

    /*######## Parte que faz o calculo das casas decimais 'quebradas' ######## */

    ranos = anos - int(anos); //ranos = perta que sobra em anos 132.04 no caso 0.4
    meses = ranos*12; // Isso vai dar 4.8
    rmeses = meses - int(meses); //parte que sobra dos meses 4.8 entao 0.8
    dias = rmeses*30; // 0.8 * 30 = 24 dias
    rdias = dias - int(dias); // parte que sobra dos dias
    horas = rdias*24;
    rhoras = horas - int(horas);
    minutos = rhoras*60;
    rminutos = minutos - int(minutos);
    segundos = rminutos*60;

    /*##########################################################################*/

    String distancia2 = "a distancia informada em";
    
    if (segundos2 < 60)  {
        Serial.print("\n O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.println(segundos);
    } else if (segundos2 > 60 && segundos2 < 3600) { //1min até 1 hora
        Serial.print(" O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.print(minutos);
        Serial.print(" minutos e ");
        Serial.print(segundos);
        Serial.println(" segundos: ");
    } else if (segundos2 > 3600 && segundos2 <  86400) { //1 horas até 1 dia
        Serial.print(" O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.print(int(horas));
        Serial.print(" horas ");
        Serial.print(int(minutos));
        Serial.print(" minutos e ");
        Serial.print(segundos);
        Serial.println(" segundos.");
        
    } else if (segundos2 > 86400 && segundos2 < 2592000) { //1dias até 30 dias
        Serial.print(" O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.print(int(dias));
        Serial.print(" dias ");
        Serial.print(int(horas));
        Serial.print(" horas ");
        Serial.print(int(minutos));
        Serial.print(" minutos e ");
        Serial.print(segundos);
        Serial.println(" segundos.");
    } else if (segundos2 > 2592000 && segundos2 < 31104000){ //30 dias ateh 12 meses
        Serial.print(" O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.print(int(meses));
        Serial.print(" meses ");
        Serial.print(int(dias));
        Serial.print(" dias ");
        Serial.print(int(horas));
        Serial.print(" horas ");
        Serial.print(int(minutos));
        Serial.print(" minutos e ");
        Serial.print(segundos);
        Serial.println(" segundos.");
    } else {
        Serial.print(" O tempo para percorer ");
        Serial.print(distancia2);
        Serial.print(" KM sera de ");
        Serial.print(int(anos));
        Serial.print(" anos ");
        Serial.print(int(meses));
        Serial.print(" meses ");
        Serial.print(int(dias));
        Serial.print(" dias ");
        Serial.print(int(horas));
        Serial.print(" horas ");
        Serial.print(int(minutos));
        Serial.print(" minutos e ");
        Serial.print(segundos);
        Serial.println(" segundos.");
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