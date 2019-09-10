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
int gaveta1=0, gaveta2=0, gaveta3=0, gaveta4=0, gaveta5=0, gaveta6=0;


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
    acionar_leds();

    delay(100);

  
}

void acionar_leds()
{
    saida(led1, gaveta1);
    saida(led2, gaveta2);
    saida(led3, gaveta3);
    saida(led4, gaveta4);
    saida(led5, gaveta5);
    saida(led6, gaveta6);    
}

void ler_sensores()
{
    statusBtn1 =  digitalRead(btn1);
    if (statusBtn1 == 1) {
        gaveta1 = 1;
    }else {
        gaveta1 = 0;
    }
    delay(200);

    statusBtn2 = digitalRead(btn2);
    if (statusBtn2 == 1)  {
        gaveta2 = 1;
    }else {
        gaveta2 = 0;
    }
    delay(200);
    statusBtn3 = digitalRead(btn3);
    if (statusBtn3 == 1)  {
        gaveta3 = 1;
    }else {
        gaveta3 = 0;
    }
    delay(200);
    statusBtn4 = digitalRead(btn4);
    if (statusBtn4 == 1)  {
        gaveta4 = 1;
    }else {
        gaveta4 = 0;
    }
    delay(200);
    if (digitalRead(btn5) == 1) {
        gaveta5 = 1;
    }else {
        gaveta5 = 0;
    }
    delay(200);
    if (digitalRead(btn6) == 1)  {
        gaveta6 = 1;
    }else {
        gaveta6 = 0;
    }
    delay(200);
}