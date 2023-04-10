#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int produto, nota, troco;
	
	printf("Insira o valor do produto: ");
	scanf("%d", &produto);
	
	do 
	{
		printf("\nInsira o valor da nota: ");
		scanf("%d", &nota);
	}
	while (nota < produto);
	
	troco = nota - produto;
	
	printf("\nO seu troco e de: %d Reais", troco);
}

