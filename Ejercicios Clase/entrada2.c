#include <stdio.h>

int main()
{
    int num, mayor, menor;
    printf("Introduce una secuencia de n�meros terminada en cero: ");
    scanf(" %d", &num);
    mayor = num;
    menor = num;
    int total = 0;
    int count = 0;
    double media = 0;
    while (num != 0)
    {
        total += num;
        count++;
        if (num > mayor)
            mayor = num;
        else if (num < menor)
            menor = num;
        scanf(" %d", &num);
    }
    media = (double)total / count;
    printf(" %d %d %lg", mayor, menor, media);
}
