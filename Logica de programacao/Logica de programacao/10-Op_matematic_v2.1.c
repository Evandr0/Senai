int vari1, vari2, vari3, vari4;
float varf1, varf2, varf3, varf4, varf5, varf6, varf7, varf8, varf9, varf10;
int exercicio;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
    Serial.println("Qual exercicio deseja executar letras G ateh L");
    Serial.println("Digite 7 para o exercicio G)");
    Serial.println("Digite 8 para o exercicio H)");
    Serial.println("...");
    Serial.println("Digite 12 para o exercicio L)");
    exercicio = le_numero();
    Serial.print("Exercicio escolhido foi ");
    Serial.println(exercicio);
    if (exercicio == 7) {
        exeG();
    }
    if (exercicio == 8) {
        exeH();
    }
    if (exercicio == 9) {
        exeI();
    }
    if (exercicio == 10) {
        exeJ();
    }
    if (exercicio == 11) {
        exeK();
    }
    if (exercicio == 12) {
        exeL();
    }
    if(exercicio > 12 || exercicio < 7) {
        Serial.println("#########################################################");
        Serial.println("Exercicio digitado nao eh Valido ou esta no outro arquivo, tente novamente intervalo de 7 a 12");
        Serial.println("#########################################################");
        Serial.println();
    }
}
void exeG() {
    //Exercicio g) varf1 critico + bonus
	Serial.println("Este programa calcula o Dano critico + BONUS");
  	Serial.print("Digite o valor do Dano Critico: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor do Bonus: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    varf3 = (varf1 * 1.5) + varf2;
    Serial.print("Dano critico + bonus eh: ");
    Serial.println(varf3);
    Serial.println("#######################");
    Serial.println();
}
void exeH() {
    //Exercicio h = Media ponderada (n1*p1 + n2*p2) / (p1+p2)
    Serial.println("Este programa calcula a media ponderada de duas notas");
    Serial.print("Digite a nota 1: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o peso da nota 1: ");
    vari1 = le_numero_quebrado();
    Serial.println(vari1);
    Serial.print("Digite a nota 2: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o peso da nota 2: ");
    vari2 = le_numero_quebrado();
    Serial.println(vari2);
    varf5 = (varf1*vari1 + varf2*vari2)/ (vari1+vari2);
    Serial.print("A media ponderada eh: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();
}
void exeI() {
       //Exercicio i = poupanca = salario - (moradia+agua+luz+internet+gasolina+netflix+telefone+outros)

    Serial.println("Este programa calcula quanto voce poupara em um mes.");
    Serial.print("Digite quanto gasta com moradia R$: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite quanto gasta com agua R$: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite quanto gasta com Luz R$: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite quanto gasta com internet R$: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    Serial.print("Digite quanto gasta com gasolina R$: ");
    varf5 = le_numero_quebrado();
    Serial.println(varf5);
    Serial.print("Digite quanto gasta com Netflix R$: ");
    varf6 = le_numero_quebrado();
    Serial.println(varf6);
    Serial.print("Digite quanto gasta com telefone R$: ");
    varf7 = le_numero_quebrado();
    Serial.println(varf7);
    Serial.print("Digite quanto gasta com outros gastos R$: ");
    varf8 = le_numero_quebrado();
    Serial.println(varf8);
    Serial.print("Digite seu salario mensal R$: ");
    varf9 = le_numero_quebrado();
    Serial.println(varf9);	
    varf10 = varf9 - (varf1+varf2+varf3+varf4+varf5+varf6+varf7+varf8);
    Serial.print("Você tera poupado o valor de R$: ");
    Serial.println(varf10);
    Serial.println("#######################");
    Serial.println();
}
void exeJ() {
    //Exericio j) varf5 da cantina 3
    Serial.println("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    Serial.print("Digite o valor do cafe R$: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor da coxinha R$: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o valor da bala halls R$: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite o valor do Doce de Leite R$: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    varf5 = 3*varf1+varf2+varf3+2*varf4;
    Serial.print("A conta da cantina eh R$: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();
}
void exeK() {
        //Exercicio k) cafe por alunos

    Serial.println("Este programa calcula a quantidade de cafe por Alunos.");
    Serial.print("Digite a quantidade de cafe em kilogramas: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite a quantidade de Alunos: ");
    vari1 = le_numero();
  	Serial.println(vari1);
    varf5 = varf1/vari1;
    Serial.print("Cafe per capita eh: ");
    Serial.print(varf5);
  	Serial.println(" Kilogramas");
    Serial.println("#######################");
    Serial.println();
}
void exeL() {
    //Exercicio l) cafe por alunos + EXTRA

    Serial.println("Este programa calcula a quantidade de cafe por Alunos + EXTRA.");
    Serial.print("Digite a quantidade de cafe em kilogramas: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite a quantidade de cafe EXTRA em kilogramas: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite a quantidade de Alunos: ");
    vari1 = le_numero();
  	Serial.println(vari1);
    varf5 = (varf1+varf2)/vari1;
    Serial.print("cafe per capita eh: ");
    Serial.print(varf5);
  	Serial.println(" Kilogramas");
    Serial.println("#######################");
    Serial.println();
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