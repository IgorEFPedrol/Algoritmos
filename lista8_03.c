#include <stdio.h>
#include <math.h>

calcVacasFinal(int vacas, int geracoes);

int main(void)
{
    int vacas_inicial, geracoes;

    do
    {
        printf("\nNumero inicial de vacas: ");
        scanf("%d", &vacas_inicial);
    }
    while(vacas_inicial < 2);

    printf("\nQuantas geracoes? ");
    scanf("%d", &geracoes);

    printf("\nApos %d geracoes existirao %.0f vacas\n", geracoes, floor(calcVacasFinal(vacas_inicial, geracoes)));
}

calcVacasFinal(int vacas, int geracoes)
{
    float vacas_final = vacas * pow(1.5, geracoes - 1);

    return vacas_final;
}
