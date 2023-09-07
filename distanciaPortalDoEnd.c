#include <stdio.h>
#include <math.h>

int calculaC(int b);
float calculaAC(int x, int b, int c);
float calculaBC(int b, float ac);

int main(void)
{
    int a, b, c, cb;
    float ac, bc;

    printf("\nInforme a e b: \n");
    scanf("%d %d", &a, &b);

    c = calculaC(b);
    ac = calculaAC(a, b, c);
    bc = calculaBC(b, ac);

    printf("\nA distancia AC = %.2f e BC = %.2f", ac, bc);
}

int calculaC(int b)
{
    return 90 - b;
}

float calculaAC(int a, int b, int c)
{
    float cb, cc;
    cb = (b * 3.1415) / 180;
    cc = (c * 3.1415) / 180;

    return sin(cb) * a / (float)sin(cc);
}

float calculaBC(int b, float ac)
{
    float cb;
    cb = (b * 3.1415) / 180;
    return sin(90) * ac / sin(cb);
}
