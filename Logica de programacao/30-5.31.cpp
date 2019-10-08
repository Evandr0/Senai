/*receber salario, valor do emprestimo e numero de prestacoes 
prestacao nao pode ser maior que 30% do salario*/
float salario, emprestimo, valor_prestacao, salario30;
int n;
void setup() {
    Serial.begin(9600);
}

void loop() {
    separador();
    Serial.print("Digite o Salario do Garcom: R$");
    salario = le_numero_quebrado();
    Serial.println(salario);
    separador();
    Serial.print("Digite o valor do emprestimo: R$");
    emprestimo = le_numero_quebrado();
    Serial.println(emprestimo);
    separador();
    Serial.print("Digite o numero de prestacoes: ");
    n = le_numero();
    Serial.println(n);
    separador();


    valor_prestacao = emprestimo / n;

    salario30 = salario *0.3;

    if (valor_prestacao > salario30){
        Serial.println("Emprestimo nao pode ser concedido.");
        separador();
    } else {
        Serial.println("Parabens sua linha de credito pode ser liberada.");
        separador();
    }



    
}

void separador(){
    Serial.println("============================================");
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