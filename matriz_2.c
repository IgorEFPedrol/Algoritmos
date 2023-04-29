#include <stdio.h>

int main()
{
    int num_alunos, num_notas;
    float notas[100][100], soma, media;

    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);

    printf("Digite o número de notas por aluno: ");
    scanf("%d", &num_notas);

    for(int i = 0; i < num_alunos; i++)
    {
        printf("Digite as notas do aluno %d:\n", i+1);

        for(int j = 0; j < num_notas; j++)
        {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }

        media = soma / num_notas;
        printf("Média do aluno %d: %.2f\n", i+1, media);
        soma = 0;
    }

    return 0;
}

