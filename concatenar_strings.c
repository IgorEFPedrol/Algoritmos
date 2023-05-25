#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    char prim_nome[50] = {"Ola "};

    //A funcao strcat() concatena o segundo parametro na string do primeiro param
    strcat(prim_nome, "Igor ");

    strcat(prim_nome, "Pedrol");

    printf("%s", prim_nome);
}
