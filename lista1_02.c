#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int media_planetas = 17;
	int galaxias, planeta_total;
	
	printf("Numero de galaxias para estimar a quantidade de planetas: ");
	scanf("%d", &galaxias);
	
	printf("\nA estimativa de planetas e de: %d Bilhoes", media_planetas * galaxias);
		
	return 0;
}
