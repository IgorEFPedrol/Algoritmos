#include <stdio.h>

int calcularDeterminante3x3(int matriz[3][3]);

int main (void)
{
    int matriz_inicial[3][3] = {0}, i, j, escolha;

    printf("0 - Calcular determinante de uma Matriz 3x3 \n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0:
            for (i = 0; i < 3; i++)
            {
                printf("\nInsira os termos da Linha %d", i);

                for (j = 0; j < 3; j++)
                {
                    printf("\ntermo [%d][%d]: ", i, j);
                    scanf("%d", &matriz_inicial[i][j]);
                }
            }
            printf("\nO determinante da Matriz 3x3 = %d \n", calcularDeterminante3x3(matriz_inicial));
            break;
        case 1:

            break;
        case 2:

            break;
    }
}

int calcularDeterminante3x3(int matriz[3][3])
{
    int determinante;

    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
                   matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
                   matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    return determinante;
}
