/*Programa recupera dois numeros inteiros
Soma o quadrado dos numeros digitados e depois compara qual numero que você digitou eh maior.
Teste git*/
int numero1, numero2;
float soma;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("Digite o primeiro numero: ");
    numero1 = le_numero();
    Serial.println(numero1);
    Serial.print("Digite o segundo numero: ");
    numero2 = le_numero();
    Serial.println(numero2);
    soma = pow(numero1, 2) + pow(numero2, 2);
    Serial.print("A soma dos quadrados deu: ");
    Serial.println(soma);

    if (numero1 > numero2) 
    {
        Serial.println("O numero 1 eh maior que o numero 2\n");
    } else {
        if (numero1 == numero2) 
        {
            Serial.println("O numero 1 eh igual ao numero 2\n");
        }else
        {
             Serial.println("O numero 1 eh menor que o numero 2\n");
        }
    }

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
