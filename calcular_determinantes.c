#include <stdio.h>

int calcularDeterminante3x3(int matriz[3][3]);

int main (void)
{
    int matriz_3[3][3] = {0}, matriz_4[4][4] = {0}, i, j, escolha;

    printf("0 - Calcular determinante de uma Matriz 3x3 \n1 - Calcular determinante de uma Matriz 4x4 \nEscolha uma das opcoes acima: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 0:
            for (i = 0; i < 3; i++)
            {
                printf("\nInsira os termos da Linha %d", i);

                for (j = 0; j < 3; j++)
                {
                    printf("\nTermo [%d][%d]: ", i, j);
                    scanf("%d", &matriz_3[i][j]);
                }
            }
            printf("\nO determinante da Matriz 3x3 = %d \n", calcularDeterminante3x3(matriz_3));
            break;
        case 1:
            for (i = 0; i < 4; i++)
            {
                printf("\nInsira os termos da Linha %d", i);

                for (j = 0; j < 4; j++)
                {
                    printf("\nTermo [%d][%d]: ", i, j);
                    scanf("%d", &matriz_4[i][j]);
                }
            }
            printf("\nO determinante da Matriz 4x4 = %d \n", calcularDeterminante4x4(matriz_4));

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

int calcularDeterminante4x4(int matriz[4][4])
{
    int determinante, matriz_menor[3][3], i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz_menor[i][j] = matriz[i+1][j+1];
        }
    }
    determinante = matriz[0][0] * (calcularDeterminante3x3(matriz_menor));

    matriz_menor[0][0] = matriz[1][0];
    matriz_menor[0][1] = matriz[1][2];
    matriz_menor[0][2] = matriz[1][3];
    matriz_menor[1][0] = matriz[2][0];
    matriz_menor[1][1] = matriz[2][2];
    matriz_menor[1][2] = matriz[2][3];
    matriz_menor[2][0] = matriz[3][0];
    matriz_menor[2][1] = matriz[3][2];
    matriz_menor[2][2] = matriz[3][3];

    determinante -= matriz[0][1] * (calcularDeterminante3x3(matriz_menor));

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            matriz_menor[i][j] = matriz[i+1][j];
        }
    }
    matriz_menor[0][2] = matriz[1][3];
    matriz_menor[1][2] = matriz[2][3];
    matriz_menor[2][2] = matriz[3][3];

    determinante += matriz[0][2] * (calcularDeterminante3x3(matriz_menor));

    for (i = 0; i< 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz_menor[i][j] = matriz[i+1][j];
        }
    }
    determinante -= matriz[0][3] * (calcularDeterminante3x3(matriz_menor));

    return determinante;
}

