#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso_ideal, peso_atual;
    
    printf("\nQual a sua altura em metros? ");
    scanf("%f", &altura);

    peso_ideal = (72.7 * altura) - 58;
    
    printf("\nQual o seu peso atual? ");
    scanf("%f", &peso_atual);

    if (peso_atual > peso_ideal)
    {
        printf("\nFaltam %.2fKg para atingir o peso ideal", peso_atual - peso_ideal);
    }
    else
    {
        printf("\nParabens voce atingiu seu peso ideal!");
    }

    return 0;
}
