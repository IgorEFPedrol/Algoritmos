#include <stdio.h>

int main (void)
{
    int tamanho, i, maior, menor;

    printf("Quantos cofres existem no banco? ");
    scanf("%d", &tamanho);

    float cofre[tamanho], maior_valor = 0, menor_valor = 99999, total = 0;

    for (i = 0; i < tamanho; i++)
    {
        printf("\nValor do cofre %d: R$", i);
        scanf("%f", &cofre[i]);

        if (cofre[i] > maior_valor)
        {
            maior_valor = cofre[i];
            maior = i;
        }
        if (cofre[i] < menor_valor)
        {
            menor_valor = cofre[i];
            menor = i;
        }
        total += cofre[i];
    }

    printf("\nO total de galeoes guardados nos cofres eh %.2f\n\nO maior Valor esta no cofre: %i\n\nO menor valor esta no cofre: %i", total, maior, menor);
}
