#include <stdio.h>

long fact;
int exp, termos;

int fatorial(int n)
{
    fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int potencia(int base, int exp)
{
    //base = 2; exp = 3
    //2 * 2 * 2
    int pot = 1;
    for (int i = 0; i < exp; i++)
    {
        pot *= base;
    }
    return pot;

}

int somaFibonacci(int termos)
{
    int fibonacci = 1;
    for (int i = 0; i < termos; i++)
    {
        fibonacci += ant;
        //1, 1, 2, 3, 5
        //1 = 1 + 1
        //2 = 2 + 1
        //fibonacci = fibonacci + num
    }
    return fibonacci;
}

float mediaAltura(int pessoas)
{

}

int main(void)
{
    int num = 5, op;

    do
    {
        printf("Escolha uma opcao:\n1 - Fatorial \n2 - Potencia \n3 - Fibonacci \n4 - Media das alturas");
        scanf("%d", &op);
    }
    while(op != 1 && op != 2 && op != 3);

    switch (op)
    {
        case 1:
            printf("%d", fatorial(num));
            break;

        case 2:
            printf("\nDigite a base e o expoente do numero: \n");
            scanf("%d %d", &num, &exp);

            printf("\n%d elevado a %d = %d", num, exp , potencia(num, exp));
            break;

        case 3:
            printf("\nCalcular a sequencia de fibonacci de quantos termos: ");
            scanf("%d", &termos);

            printf("\nA sequencia de Fibonacci de %d termos = %d", termos ,somaFibonacci(termos));

    }
}
