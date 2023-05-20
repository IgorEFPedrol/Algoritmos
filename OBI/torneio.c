#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char result[6], vitorias = 0, derrotas = 0, i;

    scanf("%c %c %c %c %c %c", &result[0], &result[1], &result[2], &result[3], &result[4], &result[5]);

    for(i = 0; i < 6; i++)
    {
        result[i] = toupper(result[i]);

        if(result[i] == 'V')
            vitorias++;

        else if(result[i] == 'P')
            derrotas++;
    }

    if(vitorias == 0)
        printf("-1\n");

    else if(vitorias >= 5)
        printf("1\n");

    else if(vitorias >= 3)
        printf("2\n");

    else
        printf("3\n");

    return 0; 
}
