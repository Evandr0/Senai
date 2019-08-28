#define escreve Serial.print
#define escreveln Serial.println

int dias, vitorias, empates, pontos, peso1, peso2;
float salario_diario, cafe, coxinha, halls, doceDeLeite, conta, nota1, nota2, nota3, nota4, dano, critico, bonus;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    //Exercicio a)
    escreveln("Este programa fara o calculo para saber quanto voce ganha em um dia.");
    escreve("Digite quanto voce ganha por Mes: ");
    salario_diario = le_numero_quebrado();
    escreveln(salario_diario);
    escreve("Digite quantos dias no mes voce trabalha: ");
    dias = le_numero();
    escreveln(dias);
    escreve("Seu salario diario eh: ");
    salario_diario = salario_diario/dias;
    escreveln(salario_diario);
    escreveln("#######################");
    escreveln();
    
    //Exercicio b)
    escreveln("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    escreve("Digite o valor do cafeh: ");
    cafe = le_numero_quebrado();
    escreveln(cafe);
    escreve("Digite o valor da coxinha: ");
    coxinha = le_numero_quebrado();
    escreveln(coxinha);
    escreve("Digite o valor da bala Halls: ");
    halls = le_numero_quebrado();
    escreveln(halls);
    escreve("Digite o valor do Doce de Leite: ");
    doceDeLeite = le_numero_quebrado();
    escreveln(doceDeLeite);
    conta = cafe+coxinha+halls+doceDeLeite;
    escreve("A conta da cantina eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();

    //Exercicio c)
    escreveln("Este programa calcula a media de 2 notas.");
    escreve("Digite o valor da nota 1: ");
    nota1 = le_numero_quebrado();
    escreveln(nota1);
    escreve("Digite o valor da nota 2: ");
    nota2 = le_numero_quebrado();
    escreveln(nota2);
    escreve("Digite o valor da nota 3: ");
    nota3 = le_numero_quebrado();
    escreveln(nota3);
    escreve("Digite o valor da nota 4: ");
    nota4 = le_numero_quebrado();
    escreveln(nota4);
    conta = (nota1+nota2+nota3+nota4)/4;
    escreve("A media do Aluno eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();

    //Exericio d) pontos = vitorias*3 + empates
    escreveln("Este programa calcula a quantidade de pontos de um time, vitoria = 3, empate = 1.");
    escreve("Digite o numero de vitorias: ");
    vitorias = le_numero();
    escreveln(vitorias);
    escreve("Digite o numero de empates: ");
    empates = le_numero();
    escreveln(empates);
    pontos = vitorias*3 + empates;
    escreve("Numero total de pontos eh: ");
    escreveln(pontos);
    escreveln("#######################");
    escreveln();

    //Exercicio e) conta da cantina 2; 
    escreveln("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    escreveln("Obs: Cafeh x2.");
    escreve("Digite o valor do cafeh: ");
    cafe = le_numero_quebrado();
    escreveln(cafe);
    escreve("Digite o valor da coxinha: ");
    coxinha = le_numero_quebrado();
    escreveln(coxinha);
    escreve("Digite o valor da bala Halls: ");
    halls = le_numero_quebrado();
    escreveln(halls);
    escreve("Digite o valor do Doce de Leite: ");
    doceDeLeite = le_numero_quebrado();
    escreveln(doceDeLeite);
    conta = 2*cafe+coxinha+halls+doceDeLeite;
    escreve("A conta da cantina eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();

    //Exercicio f) Dano critico
    escreveln("Este programa calcula o Dano critico em um jogo qualquer.");
    escreveln("Dano critico x 1.5");
    escreve("Digite o valor do Dano Critico: ");
    dano = le_numero_quebrado();
    escreveln(dano);
    critico = dano * 1.5;
    escreve("Dano critico eh: ");
    escreveln(critico);
    escreveln("#######################");
    escreveln();

    //Exercicio g) Dano critico + bonus
    escreveln("Este programa calcula o Dano critico + Bonus em um jogo qualquer.");
    escreveln("Dano critico x 1.5 + Bonus.");
    escreve("Digite o valor do Dano Critico: ");
    dano = le_numero_quebrado();
    escreveln(dano);
    escreve("Digite o valor do Bonus: ");
    bonus = le_numero_quebrado();
    escreveln(bonus);
    critico = (dano * 1.5) + bonus;
    escreve("Dano critico + bonus eh: ");
    escreveln(critico);
    escreveln("#######################");
    escreveln();

    //Exercicio h = Media ponderada (n1*p1 + n2*p2) / (p1+p2)
    escreveln("Este programa calcula a media ponderada de duas notas");
    escreveln("digite a nota e peso correspondetes quando solicitado.");
    escreve("Digite a nota 1: ");
    nota1 = le_numero_quebrado();
    escreveln(nota1);
    escreve("Digite o peso da nota 1: ");
    peso1 = le_numero_quebrado();
    escreveln(peso1);
    escreve("Digite a nota 2: ");
    nota2 = le_numero_quebrado();
    escreveln(nota2);
    escreve("Digite o peso da nota 2: ");
    peso2 = le_numero_quebrado();
    escreveln(peso2);
    conta = (nota1*peso1 + nota2*peso2)/ (peso1+peso2);
    escreve("A media ponderada eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();

    //Exercicio i = poupanca = salario - (moradia+agua+luz+internet+gasolina+netflix+telefone+outros)
    float poupanca, salario, moradia, agua, luz, internet, gasolina, netflix, telefone, outros;
    escreveln("Este programa calcula quanto voce poupara em um mes.");
    escreveln("Digite os gastos quando solicitado.");
    escreve("Digite quanto gasta com moradia: ");
    moradia = le_numero_quebrado();
    escreveln(moradia);
    escreve("Digite quanto gasta com agua: ");
    agua = le_numero_quebrado();
    escreveln(agua);
    escreve("Digite quanto gasta com Luz: ");
    luz = le_numero_quebrado();
    escreveln(luz);
    escreve("Digite quanto gasta com internet: ");
    internet = le_numero_quebrado();
    escreveln(internet);
    escreve("Digite quanto gasta com gasolina: ");
    gasolina = le_numero_quebrado();
    escreveln(gasolina);
    escreve("Digite quanto gasta com Netflix: ");
    netflix = le_numero_quebrado();
    escreveln(netflix);
    escreve("Digite quanto gasta com telefone: ");
    telefone = le_numero_quebrado();
    escreveln(telefone);
    escreve("Digite quanto gasta com outros gastos: ");
    outros = le_numero_quebrado();
    escreveln(outros);
    poupanca = salario_diario*dias - (moradia+agua+luz+internet+gasolina+netflix+telefone+outros);
    escreve("Você tera poupado o valor de: ");
    escreveln(poupanca);
    escreveln("#######################");
    escreveln();
/*
    //Exericio j) conta da cantina 3
    escreveln("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    escreveln("Obs: Cafeh x3 e doce de leite x2.");
    escreve("Digite o valor do cafeh: ");
    cafe = le_numero_quebrado();
    escreveln(cafe);
    escreve("Digite o valor da coxinha: ");
    coxinha = le_numero_quebrado();
    escreveln(coxinha);
    escreve("Digite o valor da bala Halls: ");
    halls = le_numero_quebrado();
    escreveln(halls);
    escreve("Digite o valor do Doce de Leite: ");
    doceDeLeite = le_numero_quebrado();
    escreveln(doceDeLeite);
    conta = 3*cafe+coxinha+halls+2*doceDeLeite;
    escreve("A conta da cantina eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();


    //Exercicio k) cafeh por alunos
    int alunos;
    escreveln("Este programa calcula a quantidade de cafeh por Alunos.");
    escreve("Digite a quantidade de cafeh em kilogramas: ");
    cafe = le_numero_quebrado();
    escreveln(cafe);
    escreve("Digite a quantidade de Alunos");
    alunos = le_numero();
    conta = cafe/alunos;
    escreve("Cape per capita eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();

    //Exercicio k) cafeh por alunos + EXTRA
    float extra;
    escreveln("Este programa calcula a quantidade de cafeh por Alunos + EXTRA.");
    escreve("Digite a quantidade de cafeh em kilogramas: ");
    cafe = le_numero_quebrado();
    escreveln(cafe);
    escreve("Digite a quantidade de cafeh EXTRA em kilogramas: ");
    extra = le_numero_quebrado();
    escreveln(extra);
    escreve("Digite a quantidade de Alunos");
    alunos = le_numero();
    conta = (cafe+extra)/alunos;
    escreve("Cafe per capita eh: ");
    escreveln(conta);
    escreveln("#######################");
    escreveln();
    */


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