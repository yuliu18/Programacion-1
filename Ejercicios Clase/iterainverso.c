#include <stdio.h>

int main()
{
    int N;
    printf("Introduzca un numero N: ");
    scanf(" %d", &N);

    for (int i = (N - 1); i >= 0; i--)
        printf(" %d", i);
    printf("\n");
}
