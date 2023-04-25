#include <stdio.h>

int main(void)
{
    int numerador = 1, denominador = 1;
    float soma = 0;

    for (int i = 0; i < 50; i++)
    {
        printf(" %d/%d  ", numerador, denominador);
        soma += ((float)numerador / (float)denominador);
        numerador += 2;
        denominador ++;
    }
    printf("\n\nA soma = %f", soma);
    printf("\n");
    return 0;
}
