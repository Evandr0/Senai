int menu;

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("=============================");
    Serial.println("=====Escolha uma opcao: =====");
    Serial.println("opcao 1: Cadastrar produto;");
    Serial.println("opcao 2: Visualizar produto;");
    Serial.println("opcao 3: Editar produto;");
    Serial.println("opcao 4: Cadastrar funcionario;");
    Serial.println("opcao 5: visualizar funcionario;");
    Serial.println("=============================");

    menu = le_numero();

    if (menu == 1){
        cadastrar_produto();
    } else if (menu == 2) {
        visualizar_produto();
    } else if (menu == 3) {
        editar_produto();
    }else if (menu == 4) {
        cadastrar_funcionario();
    } else if (menu == 5) {
        visualizar_funcionario();
    }
    
}

String modeloProduto;
String fabricante;
String numeroDeSerie;
String nomeFuncionario;
String admissao;
int matricula;
int estoque;
int quantidadeMinima;

void cadastrar_produto(){
    Serial.println("=============================\n====Opcao 1 foi escolhida====\n=============================");
    Serial.print("Digite o modelo do produto: ");
    modeloProduto = le_nome();
    Serial.println(modeloProduto);
    Serial.print("Digite o fabricante do produto: ");
    fabricante = le_nome();
    Serial.println(fabricante);
    Serial.print("Digite o numero de serie do produto: ");
    numeroDeSerie = le_nome();
    Serial.println(numeroDeSerie);
    Serial.print("Digite a quantidade em estoque: ");
    estoque = le_numero();
    Serial.println(estoque);
    Serial.print("Digite a quantidade minima: ");
    quantidadeMinima = le_numero();
    Serial.println(quantidadeMinima);
    Serial.println("============FIM==============");


}

void visualizar_produto(){
    Serial.println("=============================\n====Opcao 2 foi escolhida====\n=============================");
    Serial.print("Modelo: ");
    Serial.println(modeloProduto);
    Serial.print("Fabricante: ");
    Serial.println(fabricante);
    Serial.print("Numero de serie: ");
    Serial.println(numeroDeSerie);
    Serial.print("Estoque: ");
    Serial.println(estoque);
    if (estoque <= quantidadeMinima) {
        Serial.print("Estoque abaixo do esperado Qtd: ");
        Serial.println(quantidadeMinima);
    } else {
        Serial.print("Estoque normal Qtd: ");
        Serial.println(estoque);
    }
    Serial.println("============FIM==============");

}

void editar_produto(){
    Serial.println("=============================\n====Opcao 3 foi escolhida====\n=============================");
    Serial.println("Qual item deseja modificar?");
    Serial.println("opcao 1: Modelo.");
    Serial.println("opcao 2: Fabricante.");
    Serial.println("opcao 3: Quantidade em estoque.");
    Serial.println("opcao 4: Quanditdade minima permitida.");
    menu = le_numero();
    if (menu == 1){
        Serial.print("Digite o novo Modelo: ");
        modeloProduto = le_nome();
        Serial.println(modeloProduto);
    } else if (menu == 2) {
        Serial.print("Digite o novo Fabricante: ");
        fabricante = le_nome();
        Serial.println(fabricante);
    } else if (menu == 3) {
        Serial.print("Digite a quantidade em estoque: ");
        estoque = le_numero();
        Serial.println(estoque);
    }else if (menu == 4) {
        Serial.print("Digite a quantidade minima permitida: ");
        quantidadeMinima = le_numero();
        Serial.println(quantidadeMinima);
    }
    Serial.println("============FIM==============");

}

void cadastrar_funcionario(){
    Serial.println("=============================\n====Opcao 4 foi escolhida====\n=============================");
    Serial.print("Digite o nome do funcionario:");
    nomeFuncionario = le_nome();
    Serial.println(nomeFuncionario);
    Serial.print("Digite a matricula: ");
    matricula = le_numero();
    Serial.println(matricula);
    Serial.print("Digite a data de admissão");
    admissao = le_nome();
    Serial.println(admissao);
    Serial.println("============FIM==============");

}

void visualizar_funcionario(){
    Serial.println("=============================\n====Opcao 5 foi escolhida====\n=============================");
    Serial.print("Nome do funcionario: ");
    Serial.println(nomeFuncionario);
    Serial.print("Matricula: ");
    Serial.println(matricula);
    Serial.print("Admissao: ");
    Serial.println(admissao);
    Serial.println("============FIM==============");

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