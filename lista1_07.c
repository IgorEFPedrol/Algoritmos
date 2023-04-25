#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int blemfarck = 336;
    float dolar, conversao;

    printf("\nQuantos dolares? ");
    scanf("%f", &dolar);

    printf("\n$%.2f em Blemfarck = %.2f", dolar, dolar / blemfarck);
}
