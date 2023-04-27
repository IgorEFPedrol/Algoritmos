#include <stdio.h>

identificarObjeto(float diametro);

int main(void)
{
    float diametro;

    do
    {
        printf("\nQual o diametro do objeto em KM? ");
        scanf("%f", &diametro);
    }
    while (diametro <= 0);

    identificarObjeto(diametro);
}

identificarObjeto(float diam)
{
    printf("-------------------");
    if (diam == 160)
    {
        printf("\nEstrela da Morte!\n");
    }
    else if (diam <= 100)
    {
        printf("\nMeteoro ou Asteroide\n");
    }
    else if (diam <= 3000)
    {
        printf("\nLua ou Planeta Anao\n");
    }
    else if (diam <= 120000)
    {
        printf("\nPlaneta\n");
    }
    else
    {
        printf("\nEstrela\n");
    }
    printf("-------------------");
}
