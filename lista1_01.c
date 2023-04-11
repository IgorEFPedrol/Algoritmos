#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura_1, altura_2, media;
	
	printf("Altura da Primeira pessoa: ");
	scanf("%d", &altura_1);
	
	printf("\nAltura da Segunda pessoa: ");
	scanf("%d", &altura_2);
	

	

	media = (altura_1 + altura_2) / 2;
	
	printf("\nA media entre as alturas e de: %d", media);
	
	return 0;
}

