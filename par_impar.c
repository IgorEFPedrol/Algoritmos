#include <stdio.h>

int main()
{
    int max, resposta;

    do
    {
        printf("Quer saber quais numeros sao par ou impar? (0 - par)  (1 - impar)  ");
        scanf("%d", &resposta);
    }
    while (resposta != 0 && resposta != 1);

    printf("\nAte qual numero? ");
    scanf("%d", &max);
    printf("\n");

    for (int i = 0; i <= max; i++)
    {
        if (resposta == 0)
        {
            if (i % 2 == 0)
            {
                printf("%d  ", i);
            }
        }
        else
        {
            if (i % 2 == 1)
            {
                printf("%d  ", i);
            } 
        }
    }

    return 0;
}
