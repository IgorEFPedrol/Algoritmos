#include <stdio.h>
#include <math.h>

int main (void)
{
    int i, tamanho, soma = 0;
    float media, somaTotal = 0, variancia;

    do
    {
        printf("\nQuantos alunos? ");
        scanf("%d", &tamanho);
    }
    while(tamanho < 1 || tamanho > 40);

    int faltas[tamanho - 1];

    for(i = 0; i < tamanho; i++)
    {
        do
        {
            printf("\nFaltas: ");
            scanf("%d", &faltas[i]);
        }
        while(faltas[i] < 0);

        soma += faltas[i];
    }

    media = (float)soma / tamanho;

    printf("\n----------------------");
    printf("\n  A media eh %.2f", media);

    for(i = 0; i < tamanho; i++)
    {
        somaTotal += pow((faltas[i] - media), 2);
    }

    variancia = sqrt((1.0 / tamanho) * somaTotal);

    printf("\n----------------------");
    printf("\n  A variancia eh %.2f", variancia);
    printf("\n----------------------");
}
