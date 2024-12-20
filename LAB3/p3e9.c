#include <stdio.h>
#include <stdbool.h>

bool secuencia_zigzag(char* c)
{
    bool ok = true;
    char antes = *c;
    scanf(" %c", c);
    while (*c != '0' && ok)
    {
        if ((*c > antes) || (*c < antes))
        {
            antes = *c;
            scanf(" %c", c);
        }
        else
        {
            ok = false;
        }

    }
    return ok;
}

void mostrar(bool ok)
{
    if (ok)
        printf("La secuencia introducida SI es en zigzag\n");
    else
        printf("La secuencia introducida NO es en zigzag\n");
}

void leer(char* c)
{
    bool ok = true;
    printf("Introduzca una secuencia de numeros terminada en cero:\n");
    scanf(" %c", c);
    if (*c == '0')
        ok = false;
    else
        ok = secuencia_zigzag(c);
    mostrar(ok);
}

int main()
{
    char  c;
    leer(&c);
}
