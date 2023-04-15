#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int num_funcionarios, num_filhos, sbaixo_filhos = 0;
    float media_salarial, media_filhos, porcentagem;

    printf("Deseja calcular a media de quantos funcionarios? ");
    scanf("%d", &num_funcionarios);

    int salarios[num_funcionarios], filhos[num_funcionarios];


    for (int i = 0; i < num_funcionarios; i++)
    {
        printf("\nSalario: ");
        scanf("%d", &salarios[i]);

        printf("Numero de filhos: ");
        scanf("%d", &filhos[i]);

        if (salarios[i] <= 500 && filhos[i] > 0)
        {
            sbaixo_filhos++;
        }
    }

    for (int i = 0; i < num_funcionarios; i++)
    {
        media_salarial += salarios[i];
        media_filhos += filhos[i];
    }
    media_salarial /= num_funcionarios;
    media_filhos /= num_funcionarios;

    porcentagem = (sbaixo_filhos * 100) / num_funcionarios;

    printf("\nA media salarial dos funcionarios e: R$%.2f\nA media de filhos e de: %.0f", media_salarial, media_filhos);
    printf("\nA porcentagem de funcionarios com baixa renda e que tem filhos e de: %.2f%%", porcentagem);

    return 0;
}
