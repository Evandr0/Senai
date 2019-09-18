/*Arduino + print serial 
Operações Matemáticas */

#define escreve Serial.print
#define escreveln Serial.println
float a = 23, b=4, c=0, d=0, e=0, f=0;
float res;

void setup() {
    Serial.begin(9600);

    //exericio a
    res = a/b;
    escreve("Exericio a) res: ");
    escreveln(res);

    //exericio b
    a= 20, b=15, c=2;
    res= a-b/2;
    escreve("Exericio b) res: ");
    escreveln(res);

    //ex C
    res = (a - b)/c;
    escreve("Exericio c) res: ");
    escreveln(res);

    //ex D
    a = 35, b = 6, c = 2;
    res = a/b+2;
    escreve("Exericio d) res: ");
    escreveln(res);

    //ex e
    a = 25, b = 4, c = 6, d = 2;
    res = a+b-(-c)*2;
    escreve("Exericio e) res: ");
    escreveln(res);

    //ex f
    a = 2, b = 5, c = 20, d = 30, e = 15, f = 2;
    res = a*b/c+d/e*f;
    escreve("Exericio f) res: ");
    escreveln(res);

    //ex g
    a = 14, b = 2.6;
    res = a*b;
    escreve("Exericio g) res: ");
    escreveln(res);

    //ex h
    a = 55, b = 2, c = 10;
    res = a/b+c;
    escreve("Exericio h) res: ");
    escreveln(res);

    //raiz quadrada  EXTRA 2
    res = sqrt(625);
    escreve("Resultado EXTRA 2 = ");
    escreveln(res);

    /*/Potencia de 2 ??   -- EXTRA 3
    a =20;
    res = sqr(a);
    escreveln(res);*/

    //EXTRA 4
    a = 2, b =21, c, 5;
    res = a+sqrt(b/c);
    escreve("Resultado Extra 4 = ");
    escreveln(res);

    //potencia
    /*
    res = pot(a, b);
    escreve("Resultado potencia = ");
    escreveln(res);*/
}

void loop()
{

}