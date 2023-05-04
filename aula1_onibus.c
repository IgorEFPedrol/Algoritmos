#include <stdio.h>
#include <stdlib.h>

int main(){

	int onibus;

	printf("Numero do onibus: ");
	scanf("%d", &onibus);

	if (onibus == 80)
	{
		printf("\nSolicitar parada");
	}
	else
	{
		printf("\nNao solicitar parada");
	}
}

