#include <stdio.h>
#include <stdlib.h>

long fatorial(int);

int main(void)
{
    int jogadores, equipes;
    unsigned long long int combinacoes;

    do
    {
    printf("\nInsira os jogadores no total e quantos Participantes por equipe: \n");
    scanf("%d %d", &jogadores, &equipes);
    }
    while(jogadores <= 0 || equipes <= 0);

    combinacoes = fatorial(jogadores) / ((fatorial(equipes)) * (fatorial(jogadores - equipes)));

    printf("\nA quantidade de combinacoes possiveis e de: %d", combinacoes);
}

long fatorial(int numero)
{
    long fat = 1;
    for (int i = 1; i <= numero; i++)
    {
        fat *= i;
    }
    return fat;
}
