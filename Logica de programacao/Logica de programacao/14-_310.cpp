/*Programa calcula as corridas de uber e soma o total.
Porém retira 25% da taxinha do uber e calcula o salario no final do mês*/
float corre1, corre2, corre3, corre4, corre5, soma, soma2, salario;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("\nDigite o valor do primeiro 'corre': ");
    corre1 = le_numero_quebrado();
    Serial.println(corre1);
    Serial.print("Digite o valor do segundo 'corre': ");
    corre2 = le_numero_quebrado();
    Serial.println(corre2);
    Serial.print("Digite o valor do terceiro 'corre': ");
    corre3 = le_numero_quebrado();
    Serial.println(corre3);
    Serial.print("Digite o valor do quarto 'corre': ");
    corre4 = le_numero_quebrado();
    Serial.println(corre4);
    Serial.print("Digite o valor do quinto 'corre': ");
    corre5 = le_numero_quebrado();
    Serial.println(corre5);
    soma = corre1+corre2+corre3+corre4+corre5;
    Serial.print("O valor total das corridas foi: ");
    Serial.println(soma);
    soma2 = soma*0.75;
    Serial.print("Porem juca soh recebe 75% deste valor, entao receberah: ");
    Serial.println(soma2);
    Serial.print("Ao final do mes, se Jucca trabllhar por 20 dias ele tera conseguido um salario de: ");
    salario = soma2*20;
    Serial.println(salario);
    Serial.println("=====================================");


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
