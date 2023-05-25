#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char nome1[100], nome2[100];
    int result;

    //A função strcpy() atribui o argumento da direita para a string da esquerda
    strcpy(nome1, "aaa");
    strcpy(nome2, "bbb");

    //a função strcmp() compara a string da esquerda com a da direita e retorna a diferença entre o numero de caracteres
    result = strcmp(nome1, nome2);

    if (result < 0)
       printf("%s vem antes de %s\n", nome1, nome2);

    else if (result > 0)
        printf("%s vem depois de %s\n", nome1, nome2);

    else
        printf("Os dois nomes sao iguais!\n");
}
