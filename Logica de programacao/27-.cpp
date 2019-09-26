/*...*/
int menu;
void setup() {
    Serial.begin(9600);
}
void separador(){
    Serial.println("============================================");
}
void loop() {
    separador();
    Serial.println("Digite o numero correspondente ao programa.");
    Serial.println("1 para Programa 5.11. e 5.12 (POLIGONO)");
    Serial.println("2 para Programa 5.13. (Maior numero)");
    Serial.println("3 para programa 5.14. (TRIANGULO_LADOS)");
    Serial.println("4 para Programa 5.15. (TRIANGULO_ANGULOS)");
    Serial.println("5 para Programa 5.16. (Escrever em ordem)");
    separador();
    menu = le_numero();
    Serial.print("Opcao escolhida foi: ");
    Serial.println(menu);
    separador();

    if (menu > 1 | menu < 5){  

        if (menu ==1){
            Poligono();
        } else if (menu ==2){
            MaiorDeles();
        } else if (menu ==3){
            LadoTriangulo();
        } else if (menu ==4){
            AnguloTriangulo();
        } else if (menu == 5){
            Le_Int();
        }
    } else {
        Serial.println("Opcao INVALIDA.");
        separador();
    }



}
void Le_Int(){
    /*5.16 programa le 3 valores inteiros e escreve em ordem crescente*/
    int n1, n2, n3, maior, medio, menor;
    Serial.print("Digite o primeiro numero: ");
    n1 = le_numero();
    Serial.println(n1);
    separador();
    Serial.print("Digite o segundo numero: ");
    n2 = le_numero();
    Serial.println(n2);
    separador();
    Serial.print("Digite o terceiro numero: ");
    n3 = le_numero();
    Serial.println(n3);
    separador();
    if (n1 == n2 | n2 == n3 | n3 == 1){
        Serial.println("Espertinhooo!! Nao digite numeros iguais!");
        separador();
    } else {
        if (n1 > n2 && n1 > n3) {
            maior = n1;
            if( n2 > n3){
                medio = n2;
                menor = n3;
            } else {
                menor = n2;
                medio = n3;
            }
        } else if (n2 > n1 && n2 > n3){
            maior = n2;
            if (n1 > n3){
                medio = n1;
                menor = n3;
            } else {
                menor = n1;
                medio = n3;
            }
        } else if (n3 > n1 && n3 > n2){
            maior = n3;
            if(n2 > n1){
                medio = n2;
                menor = n1;
            } else {
                menor = n2;
                medio = n1;
            }
        }

    }
    Serial.print("Numeros na ordem crescente: ");
    Serial.print(menor);
    Serial.print(" ");
    Serial.print(medio);
    Serial.print(" ");
    Serial.println(maior);
    separador();



    
}
void AnguloTriangulo(){
    /*5.15 - Programa/função le 3 angulos de um triangulo e escreve se o triangulo eh:
    -- retangulo possui 1 angulo reto 90 graus.
    -- Obtuso possui um angulo maior do que 90
    -- Acutangulo possui 3 angulos agulos (menor que 90)*/
    float angulo1,angulo2,angulo3,soma;
    Serial.print("Digite a medida do angulo 1: ");
    angulo1 = le_numero_quebrado();
    Serial.println(angulo1);
    separador();
    Serial.print("Digite a medida do angulo 2: ");
    angulo2 = le_numero_quebrado();
    Serial.println(angulo2);
    separador();
    Serial.print("Digite a medida do angulo 3: ");
    angulo3 = le_numero_quebrado();
    Serial.println(angulo3);
    separador();
    //somar os 3 tem que ser igual aos 180
    soma = angulo1+angulo2+angulo3;
    if (soma > 180){
        Serial.println("ERROUU!! a soma dos angulos nao pode ser maior que 180");
        separador();
    } else {
        if (angulo1 == 90 | angulo2 == 90 | angulo3 ==90){
            Serial.println("TRIANGULO RETANGULO.");
            separador();
        } else if (angulo1 > 90 | angulo2 >90 | angulo3 > 90){
            Serial.println("TRIANGULO OBTUSO.");
            separador();
        } else {
            Serial.println("TRIANGULO ACUTANGULO.");
            separador();
        }
    }

}
void LadoTriangulo(){
    /*5.14.Programa/função le 3 medidas de um triangulo e informa se o triangulo eh:
    -- equilatero = 3 iguais
    -- isoceles = 2 iguais
    -- escaleno = 3 !='s */
    float lado1,lado2,lado3;
    Serial.print("Digite a medida do lado 1: ");
    lado1 = le_numero_quebrado();
    Serial.println(lado1);
    separador();
    Serial.print("Digite a medida do lado 2: ");
    lado2 = le_numero_quebrado();
    Serial.println(lado2);
    separador();
    Serial.print("Digite a medida do lado 3: ");
    lado3 = le_numero_quebrado();
    Serial.println(lado3);
    separador();
    if (lado1 == lado2 == lado3){
        Serial.println("EQUILATERO.");
        separador();
    } else if (lado1 == lado2 | lado1 == lado3 | lado2 == lado3){
        Serial.println("ISOCELES.");
        separador();
    } else {
        Serial.println("ESCALENO.");
        separador();
    }

}
void MaiorDeles(){
    int n1, n2, n3;
    /*5.13 Programa/função vai ler 3 numeros int e informar qual eh o maior.*/
    Serial.print("Digite o primeiro numero: ");
    n1 = le_numero();
    Serial.println(n1);
    separador();
    Serial.print("Digite o segundo numero: ");
    n2 = le_numero();
    Serial.println(n2);
    separador();
    Serial.print("Digite o terceiro numero: ");
    n3 = le_numero();
    Serial.println(n3);
    separador();
    if ( n1 > n2 && n1 > n3) {
        Serial.print("O numero 1 eh o maior de todos. Ele vale: ");
        Serial.println(n1);
        separador();
    } else if(n2 > n1 && n2 > n3){
        Serial.print("O numero 2 eh o maior de todos. Ele vale: ");
        Serial.println(n2);
        separador();
    } else if(n3 > n1 && n3 > n2){
        Serial.print("O numero 3 eh o maior de todos. Ele vale: ");
        Serial.println(n3);
        separador();
    } else {
        /*Se pelo menos 2 forem iguais.*/
        Serial.println("Sao iguais????");
        separador();
    }
}
void Poligono(){
    int lado;
    float medida, area;
    /*5.11 e 5.12 Programa/função le numero de lados de um poligono regular e a medida do lado em cm 
    se lado = 3 print triangulo e também area
    se lado = 4 print quadrado e também area
    se lado = 5 pentagono */
    Serial.print("Digite o numero de lados do poligono regular: ");
    lado = le_numero();
    Serial.println(lado);
    separador();
    if (lado<3){
        Serial.println("NAO EH UM POLIGONO.");
        separador();
    } else if (lado > 5){
        Serial.println("POLIGONO NAO IDENTIFICADO");
        separador();
    } else {
    Serial.print("Digite a medida do lado(cm) do poligono: ");
    medida = le_numero_quebrado();
    Serial.println(medida);
    separador();
        if (lado<3){
            Serial.println("NAO EH UM POLIGONO.");
            separador();
        } else if (lado == 3){
            Serial.println("Este poligono eh um TRIANGULO.");
            area = ((lado*lado)*sqrt(3)) / 4;
            Serial.print("Sua area vale: ");
            Serial.print(area);
            Serial.println("cm**2");
            separador();
        } else if(lado==4){
            Serial.println("Este poligono eh um QUADRADO.");
            area=lado*lado;
            Serial.print("Sua area vale: ");
            Serial.print(area);
            Serial.println("cm**2");
            separador();
        } else if (lado==5){
            Serial.println("Este poligono eh um PENTAGONO.");
            separador();
        } 
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
/*CopyRigth By Evandro   -- 2019*/