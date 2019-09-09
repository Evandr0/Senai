#define saida digitalWrite
#define btn1 2
#define btn2 3
#define btn3 4
#define btn4 5
#define btn5 6
#define btn6 7

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
}

void loop()
{
    statusBtn1 =  digitalRead(btn1);
    if (statusBtn1 == 1) {
        Serial.println("Tem coisa na gaveta 1...");
               
        statusBtn1 =1;
    }else {
        Serial.println("Gaveta 1 vazia");
    }
    delay(600);
    /*
    pode ser usado desta maneira também...
    if (digitalRead(btn1) == 1) {
        Serial.print("Tem coisa na gaveta 1..."); */
    statusBtn2 = digitalRead(btn2);
    if (statusBtn2 == 1) {
        Serial.println("Tem coisa na gaveta 2...");
        
        statusBtn2 =1;
    } else {
        Serial.println("Gaveta 2 vazia");
    }
    delay(600);
    statusBtn3 = digitalRead(btn3);
    if (statusBtn3 == 1) {
        Serial.println("Tem coisa na gaveta 3...");
        
        statusBtn3 =1;
    }else {
        Serial.println("Gaveta 3 vazia");
    }
    delay(600);
    statusBtn4 = digitalRead(btn4);
    if (statusBtn4 == 1) {
        Serial.println("Tem coisa na gaveta 4...");
        
        statusBtn4 =1;
    }else {
        Serial.println("Gaveta 4 vazia");
    }
    delay(600);
    if (digitalRead(btn5) == 1){
        Serial.println("Tem coisa na gaveta 5");
    } else {
        Serial.println("Gaveta 5 vazia");
    }
    delay(600);
    if (digitalRead(btn6) == 1) {
        Serial.println("Tem coisa na gaveta 6");
    }else {
        Serial.println("Gaveta 6 vazia");
    }
    delay(600);
  
  
}