int vari1, vari2, vari3, vari4;
float varf1, varf2, varf3, varf4, varf5, varf6, varf7, varf8, varf9, varf10;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    int exercicio;
    Serial.println("Qual exercicio deseja executar letras A ateh F");
    Serial.println("Digite 1 para o exercicio a)");
    Serial.println("Digite 2 para o exercicio b)");
    Serial.println("...");
    Serial.println("Digite 6 para o exercicio f)");
    exercicio = le_numero();
    Serial.print("Exercicio escolhido foi: ");
    Serial.println(exercicio);
    if (exercicio == 1) {
        exeA();
    }
    if (exercicio == 2) {
        exeB();
    }
    if (exercicio == 3) {
        exeC();
    }
    if (exercicio == 4) {
        exeD();
    }
    if (exercicio == 5) {
        exeE();
    }
    if (exercicio == 6) {
        exeF();
    } 
    if(exercicio > 6) {
        Serial.println("#########################################################");
        Serial.println("Exercicio digitado nao eh Valido ou esta no outro arquivo, tente novamente intervalo de 1 a 6");
        Serial.println("#########################################################");
        Serial.println();
    }

}

void exeA() {
          //Exercicio a)
    Serial.println("Este programa fara o calculo para saber quanto voce ganha em um dia.");
    Serial.print("Digite quanto voce ganha por Mes R$: ");
    varf1 = le_numero_quebrado();
    Serial.println(varf1);
    Serial.print("Digite quantos dias no mes voce trabalha: ");
    vari1 = le_numero();
    Serial.println(vari1);
    Serial.print("Seu salario diario eh R$: ");
    varf1 = varf1/vari1;
    Serial.println(varf1);
    Serial.println("#######################");
    Serial.println();
    }

void exeB() {
        
    //Exercicio b)
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
    varf5 = varf1+varf2+varf3+varf4;
    Serial.print("A conta da cantina eh R$: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();
}
void exeC() {
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
}
void exeD() {
    
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
}
void exeE() {
    
    //Exercicio e) Conta da cantina 2; 
    Serial.println("Este programa fara o calculo gasto na cantina, digite os valores dos produtos.");
    Serial.println("Obs: cafe x2.");
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
    varf5 = 2*varf1+varf2+varf3+varf4;
    Serial.print("A conta da cantina eh R$: ");
    Serial.println(varf5);
    Serial.println("#######################");
    Serial.println();
}
void exeF() {
    

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