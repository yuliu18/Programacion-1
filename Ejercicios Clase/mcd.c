#include <stdio.h>
#include <stdbool.h>

int main()
{
    int M, N;
    printf("Introduzca dos numeros: ");
    scanf(" %d %d", &M, &N);

    if (M <= 0 || N <= 0)
        printf("Error\n");
    else
    {
        while (M != N)
        {
            if (M > N)
                M = M - N;
            else
                N = N - M;
        }
        printf("El maximo comun divisor es: %d\n", M);
    }
}