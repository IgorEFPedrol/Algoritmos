#include <stdio.h>

float calcularMedia(float soma, int alun);

int main (void)
{
    int alunos;
    float soma, media;

    do
    {
        printf("Calcular a media de quantos alunos? ");
        scanf("%d", &alunos);
    }
    while(alunos <= 0);

    float nota[alunos - 1];

    for (int i = 0; i < alunos; i++)
    {
        do
        {
            printf("Nota do aluno %d: ", i+1);
            scanf("%f", &nota[i]);
        }
        while(nota[i] < 0 || nota[i] > 10);
    }

    for (int i = 0; i < alunos; i++)
    {
        soma += nota[i];
    }

    printf("\nA media das notas dos alunos = %.2f", calcularMedia(soma, alunos));

}

float calcularMedia(float soma, int alun)
{
    float media;
    media = soma / alun;
    return media;
}
