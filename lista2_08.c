#include <stdio.h>
#include <stdlib.h>

int main()
{
    int erros;
    
    printf("Quantas vezes voce esqueceu o ponto e virgula? ");
    scanf("%d", &erros);
    
    for (int i = 0; i < erros; i++)
    {
        printf("\nNão devo esquecer o ponto e virgula no final da linha;");
    }

    return 0;
}
