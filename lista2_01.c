#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int salario_base, filhos, conjuge;
	float salario_final, porcentagem;
	float verificar_filhos(int salario_base, int filhos, int conjuge);

	printf("Qual o salario base: ");
	scanf("%d", &salario_base);

	printf("\nQuantos filhos menores de 14 anos? ");
	scanf("%d", &filhos);

    printf("\nO seu conjuge trabalha? (1 para sim, 0 para nao): ");
    scanf("%d", &conjuge);

    if (conjuge == 1 || conjuge == 0)
    {
        float verificar_filhos(int salario_base, int filhos, int conjuge);
    }
    else
    {
        printf("\nO seu conjuge trabalha? (1 para sim, 0 para nao): ");
        scanf("%d", &conjuge);
    }




    //Criando uma função para verificar quantos filhos o usuário possui e qual o salário final,
    // dependendo do numero de filhos e se o conjuge trabalha
	float verificar_filhos(int salario_base, int filhos, int conjuge);
	{
		if (conjuge == 1)
		{
			porcentagem = filhos * 0.10;
			salario_final = (float)salario_base + salario_base * (0.0 + porcentagem);
            printf("\nO salario final e: R$%.2f", salario_final);
		}
		else
		{
			porcentagem = filhos * 0.05;
			salario_final = salario_base + salario_base * (0.0 + porcentagem);
			printf("\nO salario final e: R$%.2f", salario_final);
		}
	}
}

