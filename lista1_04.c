#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	const float pi = 3.14;
	int circunferencia, raio;
	float volume;
	
	printf("\nQual a circunferencia do planeta? ");
	scanf("%d", &circunferencia);
	
	raio = circunferencia / 2;
	
	volume = 4 * pi * raio / 3;
	
	printf("\nO volume do planeta e: %.2f", volume);
	
	return 0;
}
