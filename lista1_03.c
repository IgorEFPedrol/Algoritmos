#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	const int volume_destruivel = 10;
	int volume;
		
	printf("\nVolume do local a ser destruido: ");
	scanf("%d", &volume);
	
	printf("\nSao necessarias %.2f Bombas de neutrinos", (float) volume / volume_destruivel);
	
	return 0;
}
