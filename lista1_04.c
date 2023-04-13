#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
	const float pi = 3.14;
	float volume, raio;
	
	printf("\nQual o raio do planeta? ");
	scanf("%f", &raio);
	
	volume = 4 * pi * (pow(raio, 3)) / 3;
	
	printf("\nO volume do planeta e: %.2f", volume);
	
	return 0;
}
