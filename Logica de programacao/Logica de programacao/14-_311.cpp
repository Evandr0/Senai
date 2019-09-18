/* Programa conta salario horas trabalhas e desconto ao final do mês*/
float ht, vh, pd, sb, desc, sl, td;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
    Serial.print("\nDigite quantas horas trabalhou no Mes: ");
    ht = le_numero_quebrado();
    Serial.println(ht);
    Serial.print("Digite quanto voce ganha por hora trabalhada: ");
    vh = le_numero_quebrado();
    Serial.println(vh);
    Serial.print("Digite qual eh percentual de desconto: ");
    pd = le_numero_quebrado();
    Serial.println(pd);
    sb = ht*vh;
    td = (pd/100)*sb;
    sl = sb - td;
    Serial.print("horas trabalhadas: ");
    Serial.println(ht);
    Serial.print("Salario Bruto: ");
    Serial.println(sb);
    Serial.print("Desconto: ");
    Serial.println(td);
    Serial.print("Salario liquido: ");
    Serial.println(sl);
    Serial.println("===========================================");

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
