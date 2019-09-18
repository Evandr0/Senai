#define saida digitalWrite
#define btn1 2
#define btn2 3
#define btn3 4
#define btn4 5
#define btn5 6
#define btn6 7
#define led1 8
#define led2 9
#define led3 10
#define led4 11
#define led5 12
#define led6 13

int statusBtn1, statusBtn2, statusBtn3, statusBtn4;


void setup()
{
    Serial.begin(9600);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);

}

void loop()
{
    ler_sensores();
    delay(100);

  
}

void ler_sensores()
{
        statusBtn1 =  digitalRead(btn1);
    if (statusBtn1 == 1) {
        Serial.println("Tem coisa na gaveta 1...");
        saida(led1, 1);

    }else {
        Serial.println("Gaveta 1 vazia");
        saida(led1, 0);
    }
    delay(600);
    /*
    pode ser usado desta maneira também...
    if (digitalRead(btn1) == 1) {
        Serial.print("Tem coisa na gaveta 1..."); */
    statusBtn2 = digitalRead(btn2);
    if (statusBtn2 == 1) {
        Serial.println("Tem coisa na gaveta 2...");
        saida(led2, 1);

    } else {
        Serial.println("Gaveta 2 vazia");
        saida(led2, 0);
    }
    delay(600);
    statusBtn3 = digitalRead(btn3);
    if (statusBtn3 == 1) {
        Serial.println("Tem coisa na gaveta 3...");
        saida(led3, 1);

    }else {
        Serial.println("Gaveta 3 vazia");
        saida(led3, 0);
    }
    delay(600);
    statusBtn4 = digitalRead(btn4);
    if (statusBtn4 == 1) {
        Serial.println("Tem coisa na gaveta 4...");
        saida(led4, 1);

    }else {
        Serial.println("Gaveta 4 vazia");
        saida(led4, 0);
    }
    delay(600);
    if (digitalRead(btn5) == 1){
        Serial.println("Tem coisa na gaveta 5");
        saida(led5, 1);
    } else {
        Serial.println("Gaveta 5 vazia");
        saida(led5, 0);
    }
    delay(600);
    if (digitalRead(btn6) == 1) {
        Serial.println("Tem coisa na gaveta 6");
        saida(led6, 1);
    }else {
        Serial.println("Gaveta 6 vazia");
        saida(led6, 0);
    }
    delay(600);
}