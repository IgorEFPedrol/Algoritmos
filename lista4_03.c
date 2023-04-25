#include <stdio.h>
#include <math.h>

int main(void)
{
    int numerador = 1;
    float soma = 0;

    for (int i = 0; i < 10; i++)
    {
        if (numerador % 2 == 0)
        {
            soma -= ((float)numerador / pow(numerador, 2));
        }
        else
        {
            soma += ((float)numerador / pow(numerador, 2));
        }
        numerador++;
        printf("\nSoma = %f", soma);
    }
}
