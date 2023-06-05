#include <stdio.h>

int main(void)
{
    int nFigurinhas, nCarimbadas, nCompradas, i, aux, carimbadas[101] = {0};
     
    scanf(" %d %d %d", &nFigurinhas, &nCarimbadas, &nCompradas);

    for(i = 0; i < nCarimbadas; i++)
    {
        scanf("%d", &aux);
        carimbadas[aux] = 1;
    }

    for(i = 0; i < nCompradas; i++)
    {
        scanf("%d", &aux);
        if (carimbadas[aux] == 1)
            carimbadas[aux] = 0;
    }
    aux = 0;

    for(i = 0; i <= nFigurinhas; i++)
    {
        aux += carimbadas[i];
    }

    printf("%d", aux);

    return 0;
}
