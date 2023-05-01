#include <stdio.h>

int fatorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * fatorial(n - 1);
}

int main (void)
{
    int numero;
    printf("\nDeseja calcular o fatorial de qual numero? ");
    scanf("%d", &numero);

    printf("\nFatorial de %d eh: %d", numero, fatorial(numero));
}
