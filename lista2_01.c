#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int salario_base, filhos, porcentagem;
	float salario_final;
	char conjuge;
	float verificar_filhos(int salario_base, int filhos, char conjuge);
	
	printf("Qual o salario base: ");
	scanf("%d", &salario_base);
	
	printf("\nQuantos filhos menores de 14 anos? ");
	scanf("%d", &filhos);
	
	do
	{
		printf("\nO seu conjuge trabalha? (1 para sim, 0 para nao): ");
		scanf("%c", &conjuge);	
	}
	while (conjuge != 1 && conjuge != 0);
	
	verificar_filhos(salario_base, int filhos, char conjuge);

	printf("\nO salario final e: ");
	
	verificar_filhos(int salario_base, int filhos, char conjuge)
	{
		if (conjuge == 1)
		{
			porcentagem = filhos * 10;
			salario_final = salario_base + salario_base * 0.porcentagem 
		}
		else
		{
			porcentagem = filhos * 5;
			salario_final = salario base + salario-base * 0.porcentagem
		}
}
	
		
}


