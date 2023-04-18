#include <stdio.h>
#include <stdlib.h>

long fatorial(int);

int main(void)
{
    int jogadores, equipes;
    unsigned long long int combinacoes;

    printf("\nJogadores no total: ");
    scanf("%d", &jogadores);

    printf("\nParticipantes por equipe: ");
    scanf("%d", &equipes);

    combinacoes = fatorial(jogadores) / ((fatorial(equipes)) * (fatorial(jogadores - equipes)));

    printf("\nA quantidade de combinacoes possiveis e de: %d", combinacoes);
}

long fatorial(int numero)
{
    long fact = 1;
    for (int i = 1; i <= numero; i++)
    {
        fact *= i;
    }
    return fact;
}
