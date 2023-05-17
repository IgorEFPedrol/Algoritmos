#include <stdio.h>

//Imprimir todos os numeros de N ate 0;

void imprimir(int n)
{
    if (n == 0)
        printf("%d ", n);
    else
    {
        printf("%d ", n);
        imprimir(n - 1);
    }
}

int main (void)
{
    int numero;
    do
    {
        printf("\nDigite um numero inteiro maior que 0: ");
        scanf("%d", &numero);
    }
   while(numero < 0);
    printf("\n");
    imprimir(numero);
    printf("\n");
}
