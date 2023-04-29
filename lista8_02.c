#include <stdio.h>

int f_minutos(int dias);
int converter(int min, int *h, int *m);
int toDias(int h, int *horas, int *dias);

int main (void)
{
    int m_dias, min, h, m, d;
    printf("\nInforme o numero de dias no Minecraft: ");
    scanf("%d", &m_dias);

    min = to_minutos(m_dias);

    converter(min, &h, &m);

    printf("\n-----------------------------------------------------------");

    if (h >= 24)
    {
        toDias(h, &h, &d);

        printf("\n%d dias no Minecraft equivalem a %d dias, %d horas e %d minutos!", m_dias, d, h,m);
    }
    else
    {
        printf("\n%d dias no Minecraft equivalem a %d horas e %d minutos", m_dias, h, m);
    }

    printf("\n-----------------------------------------------------------");
}

int to_minutos(int dias)
{
    int res;
    res = 20 * dias;
    return res;
}

int converter(int min, int *h, int *m)
{
    *h = min / 60;
    *m = min % 60;
}

int toDias(int h, int *horas, int *dias)
{
    *dias = h / 24;
    *horas %= 24;
}
