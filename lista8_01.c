#include <stdio.h>
#include <math.h>

int bausNecessarios(int itens);

int main(void)
{
    int itens;

    printf("\nQuantos itens deseja armazenar? ");
    scanf("%d", &itens);

    printf("\nVoce precisa de %d bau(s) grande(s)", bausNecessarios(itens));
}

int bausNecessarios(int itens)
{
    int baus;
    baus = itens / (64 * 54);

    return baus + 1;
}
