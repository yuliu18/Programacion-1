#include <stdio.h>

int main()
{
    int N;
    printf("Introduzca un numero N: ");
    scanf(" %d", &N);

    for (int i = 0; i < N; i++)
        printf("N = %d: %d\n", N, i);
}
