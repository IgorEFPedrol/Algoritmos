#include <stdio.h>

int main(void){

	int num, i, cont=0;

	do
	{
		printf("Insira o numero que desejar saber se tem raiz quadrada exata: ");
		scanf("%d", &num);
		printf("\n");

	}while(num < 0);

	int aux = num;

	for(i = 1;aux > 0; i = i + 2)
    {
		aux = aux - i;
		cont++;
	}

	if(aux==0)
    {
		printf("A raiz quadrada de %d eh %d\n", num, cont);
	} else{
		printf("%d nao tem raiz quadrada exata\n", num);
	}

}
