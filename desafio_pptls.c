#include <stdio.h>

int main(void)
{
    int simulacoes, jogada, computador;

    printf("Deseja jogar quantas vezes? ");
    scanf("%d", &simulacoes);

    for (int i = 0; i < simulacoes; i++)
    {
        do
        {
            printf("\nSua jogada: (0 - pedra) (1 - papel) (2 - tesoura) (3 - lagarto) (4 - spock) ");
            scanf("%d", &jogada);

        }
        while (jogada != 0 && jogada != 1 && jogada != 2 && jogada != 3 && jogada != 4);

        printf("------------------");

        computador = (rand()) % 5;

        switch(computador) {
        case 0:
            printf("\nComputador jogou Pedra\n");
            break;
        case 1:
            printf("\nComputador jogou Papel\n");
            break;
        case 2:
            printf("\nComputador jogou Tesoura\n");
            break;
        case 3:
            printf("\nComputador jogou Lagarto\n");
            break;
        case 4:
            printf("\nComputador jogou Spock\n");
            break;
    }

        if (jogada == computador)
        {
            printf("\nEmpate\n------------------\n");
        }
        else if (jogada == 0 && computador == 1 || jogada == 0 && computador == 4 || jogada == 1 && computador == 2 || jogada == 1 && computador == 3 ||
                  jogada == 2 && computador == 4 || jogada == 2 && computador == 0 || jogada == 3 && computador == 0 || jogada == 3 && computador == 2 ||
                  jogada == 4 && computador == 3 || jogada == 4 && computador == 1)
        {
            printf("\nVitoria Computador\n------------------\n");
        }
        else
        {
            printf("\nVitoria Usuario\n------------------\n");
        }
    }

}
