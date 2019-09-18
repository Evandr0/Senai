int vari1, vari2, vari3, vari4;
float varf1, varf2, varf3, varf4, varf5, varf6, varf7, varf8, varf9, varf10;

void setup()
{
  Serial.begin(9600);
  /*
      //Exercicio a)
    Serial.println("Este programa fara o calculo para saber quanto voce ganha em um dia.");
    Serial.print("Digite quanto voce ganha por Mes: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite quantos dias no mes voce trabalha: ");
    vari1 = le_numero();
    Serial.println(vari1);
    Serial.print("Seu salario diario eh: ");
    varf1 = varf1/vari1;
    Serial.println(varf1);
    Serial.println("#######################");
    Serial.println();
    
    //Exercicio b)
    Serial.println("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    Serial.print("Digite o valor do cafe: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor da coxinha: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o valor da bala halls: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite o valor do Doce de Leite: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    varf5 = varf1+varf2+varf3+varf4;
    Serial.print("A conta da cantina eh: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();

    //Exercicio c)
    Serial.println("Este programa calcula a media de 4 notas.");
    Serial.print("Digite o valor da nota 1: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor da nota 2: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o valor da nota 3: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite o valor da nota 4: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    varf5 = (varf1+varf2+varf3+varf4)/4;
    Serial.print("A media do Aluno eh: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();

    //Exericio d) vari3 = vari1*3 + vari2
    Serial.println("Este programa calcula a quantidade de vitorias de um time, vitoria = 3, empate = 1.");
    Serial.print("Digite o numero de vitorias: ");
    vari1 = le_numero();
    Serial.println(vari1);
    Serial.print("Digite o numero de empates: ");
    vari2 = le_numero();
    Serial.println(vari2);
    vari3 = vari1*3 + vari2;
    Serial.print("Numero total de pontos eh: ");
    Serial.println(vari3);
    Serial.println("#######################");
    Serial.println();

    //Exercicio e) Conta da cantina 2; 
    Serial.println("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    Serial.println("Obs: cafe x2.");
    Serial.print("Digite o valor do cafe: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor da coxinha: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o valor da bala halls: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite o valor do Doce de Leite: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    varf5 = 2*varf1+varf2+varf3+varf4;
    Serial.print("A conta da cantina eh: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();

    //Exercicio f) varf1 critico
    Serial.println("Este programa calcula o Dano critico em um jogo qualquer.");
    Serial.println("Dano critico x 1.5");
    Serial.print("Digite o valor do Dano Critico: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    varf2 = varf1 * 1.5;
    Serial.print("varf1 critico eh: ");
    Serial.println(varf2);
    Serial.println("#######################");
    Serial.println();
	*/
    //Exercicio g) varf1 critico + bonus
	  Serial.println("Este programa calcula o Dano");
  	Serial.println("critico + Bonus em um jogo qualquer.");
    Serial.println("Dano critico x 1.5 + Bonus.");
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

    //Exercicio h = Media ponderada (n1*p1 + n2*p2) / (p1+p2)
    Serial.println("Este programa calcula a media ponderada de duas notas");
    Serial.println("digite a nota e peso correspondetes quando solicitado.");
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

    //Exercicio i = poupanca = salario - (moradia+agua+luz+internet+gasolina+netflix+telefone+outros)

    Serial.println("Este programa calcula quanto voce poupara em um mes.");
    Serial.println("Digite os gastos quando solicitado.");
    Serial.print("Digite quanto gasta com moradia: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite quanto gasta com agua: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite quanto gasta com Luz: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite quanto gasta com internet: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    Serial.print("Digite quanto gasta com gasolina: ");
    varf5 = le_numero_quebrado();
    Serial.println(varf5);
    Serial.print("Digite quanto gasta com Netflix: ");
    varf6 = le_numero_quebrado();
    Serial.println(varf6);
    Serial.print("Digite quanto gasta com telefone: ");
    varf7 = le_numero_quebrado();
    Serial.println(varf7);
    Serial.print("Digite quanto gasta com outros gastos: ");
    varf8 = le_numero_quebrado();
    Serial.println(varf8);
    Serial.print("Digite seu salario: ");
    varf9 = le_numero_quebrado();
    Serial.println(varf9);	
    varf10 = varf9 - (varf1+varf2+varf3+varf4+varf5+varf6+varf7+varf8);
    Serial.print("Você tera poupado o valor de: ");
    Serial.println(varf10);
    Serial.println("#######################");
    Serial.println();

    //Exericio j) varf5 da cantina 3
    Serial.println("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    Serial.println("Obs: cafe x3 e doce de leite x2.");
    Serial.print("Digite o valor do cafe: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite o valor da coxinha: ");
    varf2 = le_numero_quebrado();
    Serial.println(varf2);
    Serial.print("Digite o valor da bala halls: ");
    varf3 = le_numero_quebrado();
    Serial.println(varf3);
    Serial.print("Digite o valor do Doce de Leite: ");
    varf4 = le_numero_quebrado();
    Serial.println(varf4);
    varf5 = 3*varf1+varf2+varf3+2*varf4;
    Serial.print("A conta da cantina eh: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();


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
  	Serial.println(" gramas");
    Serial.println("#######################");
    Serial.println();

    //Exercicio k) cafe por alunos + EXTRA

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
  	Serial.println(" gramas");
    Serial.println("#######################");
    Serial.println();
    

}

void loop()
{

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