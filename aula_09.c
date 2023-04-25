#include <stdio.h>

float multiplicacao, soma, divisao, subtracao;

float somar(float num1, float num2)
{
    soma = num1 + num2;
    return soma;
}

float subtrair(float num1, float num2)
{
    subtracao = num1 - num2;
    return subtracao;
}

float dividir(float num1, float num2)
{
    divisao = num1 / num2;
    return divisao;
}

float multiplicar(float num1, float num2)
{
    multiplicacao = num1 * num2;
    return multiplicacao;
}

int main ()
{
    float n1, n2;

    printf("\nInforme dois valores: \n");
    scanf("%f %f", &n1, &n2);

    printf("\nA soma e de: %.2f", somar(n1, n2));

    printf("\nA subtracao e de: %.2f", subtrair(n1, n2));

    printf("\nA divisao e igual a: %.2f", dividir(n1, n2));

    printf("\nA multiplicacao e igual a: %.2f", multiplicar(n1, n2));
}
