#include <stdio.h>

void leer(int* num1, int* num2)
{
    printf("Introduce dos numeros positivos: ");
    scanf(" %d %d", num1, num2);
}

int mcd(int num1, int num2)
{
    int result = 0;
    if (num1 == num2)
    {
        result = num1;
    }
    else if (num1 > num2)
    {
        result = mcd(num1 - num2, num2);
    }
    else if (num2 > num1)
    {
        result = mcd(num1, num2 - num1);
    }
    return result;
}

void mostrar(int num)
{
    printf("Resultado: %d", num);
}

int main()
{
    int P, Q;
    leer(&P, &Q);
    int result = mcd(P, Q);
    mostrar(result);

}