#include <stdio.h>

int dois = 0, tres = 0, cinco = 0, sete = 0;
int verifica();

int encontrar_exp(int n)
{
    if(n == 0)
        return dois++;
	if(n == 1)
		return n;

	else if(n % 2 == 0)
	{
		n /= 2;
		dois++;
	}

	else if(n % 3 == 0)
	{
		n /= 3;
		tres++;
	}

	else if(n % 5 == 0)
	{
		n /= 5;
		cinco++;
	}

	else if(n % 7 == 0)
	{
		n /= 7;
		sete++;
	}
	else
		return(0);

	return encontrar_exp(n);
}

int main (void)
{
	int numero, res;

	printf("\nInsira um numero: ");
	scanf("%d", &numero);

	encontrar_exp(numero);

	res = verifica();

	if(res == 1)
		printf("\nQuadrado Perfeito!");
	else
		printf("\nNao eh quadrado perfeito");
}

int verifica()
{
	int res;

	dois %= 2;
	tres %= 2;
	cinco %= 2;
	sete %= 2;

	if(dois == 0 && tres == 0 && cinco == 0 && sete == 0)
		return 1;
	else
	{
		return 0;
	}

}

