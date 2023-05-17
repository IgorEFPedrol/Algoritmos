#include <stdio.h>

int main() {

    int num; 

    scanf("%d", &num);

    printf("%d\n", num);

    printf("%d nota(s) de R$ 100,00\n", num / 100);
    num %= 100;

    printf("%d nota(s) de R$ 50,00\n", num / 50);
    num %= 50;

    printf("%d nota(s) de R$ 20,00\n", num / 20);
    num %= 20;

    printf("%d nota(s) de R$ 10,00\n", num / 10);
    num %= 10;

    printf("%d nota(s) de R$ 5,00\n", num / 5);
    num %= 5;

    printf("%d nota(s) de R$ 2,00\n", num / 2);
    num %= 2;

    printf("%d nota(s) de R$ 1,00\n", num);

    return 0;
}
