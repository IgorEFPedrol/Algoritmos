#include <stdio.h>

int resultado;
long fact;

int fatorial(int n)
{
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(void)
{
    int num = 5;

    fatorial(num);

    printf("%d", fact);
}
