#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const float velocidade = 300000000;
    float distancia, porcentagem = 1;

    for (int i = 0; i < 100; i++)
    {
        distancia = velocidade * (porcentagem/100);
        porcentagem++;
        printf("\nDistancia percorrida em 1 segundo: %.2f KM", distancia);
    }

    return 0;
}
