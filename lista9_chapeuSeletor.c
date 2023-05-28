#include<stdio.h>
#include <ctype.h>
#define tam 5

void preencherCasa(char casa[]);
void contar(char casa[], int ccasa[]);

int main()
{
	char vcasa[tam];
	int conta[4] = {}, i, j, pm, maior;

	preencherCasa(vcasa);

	contar(vcasa, conta);

	for(i = 0; i < 4; i++)
	{
		maior = conta[0];
		pm = 0;
		for(j = 0; j < 4; j++)
		{
			if(conta[j] > maior)
			{
				maior = conta[j];
				pm = j;
			}
		}

		if(pm == 0)
			printf("\nGrifinoria %d", maior);

		else if(pm == 1)
            printf("\nLufa-lufa %d", maior);

        else if(pm == 2)
            printf("\nSonserina %d", maior);

        else
            printf("\nCorvinal %d", maior);

		conta[pm] = -1;
	}
	/*printf("\nGrifinoria %d",conta[0]);
	printf("\nLufa-lufa %d",conta[1]);
	printf("\nSonserina %d",conta[2]);
	printf("\nCorvinal %d",conta[3]);*/
	return 0;
}

void contar(char casa[], int ccasa[])
{
	int i;

	for(i = 0; i < 150; i++)
	{
		switch(casa[i])
		{
			case 'G':
			{
				ccasa[0]++;
			}break;

			case 'L':
			{
				ccasa[1]++;
			}break;

			case 'S':
			{
				ccasa[2]++;
			}break;

			case 'C':
			{
				ccasa[3]++;
			}break;
		}
	}
}

void preencherCasa(char casa[])
{
	char escolha;
	int i;

	for(i = 0; i < tam; i++)
	{
		do{
			printf("\nG-Grifinoria\nL-Lufa-lufa\nS-Sonserina\nC-Corvinal [%d]: ", i);
			setbuf(stdin, NULL);
			scanf("%c", &escolha);
			escolha = toupper(escolha);
		}while((escolha != 'G') && (escolha != 'L') && (escolha != 'S') && (escolha != 'C'));

		casa[i] = escolha;
	}
}
