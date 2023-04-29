#include <stdio.h>

int main (void)
{
    int alunos, notas;
    float soma, media;

    do
    {
        printf("Calcular a media de quantos alunos? ");
        scanf("%d", &alunos);
    }
    while(alunos <= 0);

    do
    {
        printf("\nQuantas notas por aluno? ");
        scanf("%d", &notas);
    }
    while(notas <= 0);

    float nota[alunos - 1][notas - 1];

    for (int i = 0; i < alunos; i++)
    {
        printf("\nDigite as Notas do aluno %d: \n", i+1);

        for (int j = 0; j < notas; j++)
        {
            printf("Nota %d: ", j+1);
            scanf("%f", &nota[i][j]);

            soma += nota[i][j];
        }

        media = soma / notas;
        printf("A media do aluno %d = %.2f", i+1, media);
        printf("\n----------------");
        soma = 0;
    }
}
