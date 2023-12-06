#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    /*Se declara los progresos y cantidad*/
    int primeroprogreso[23];
    int segundoprogreso[23];
    int tercerprogreso[23];
    int suma[23];
    int progreso[23];
    for (int i = 0; i < 23; i++)
    {
        primeroprogreso[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 23; i++)
    {
        segundoprogreso[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 23; i++)
    {
        tercerprogreso[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 23; i++)
    {
        printf("%d ", primeroprogreso[i]);
    }
    printf("\n");
    for (int i = 0; i < 23; i++)
    {
        printf("%d ", segundoprogreso[i]);
    }
    printf("\n");
    for (int i = 0; i < 23; i++)
    {
        printf("%d ", tercerprogreso[i]);
    }
    printf("Mayor promedio:");
    for (int i = 0; i < suma; i++)
    {
        suma[i] = primeroprogreso[i] + segundoprogreso[i] + tercerprogreso[i];
        progreso[i] = suma[i] / 30;
    }

    for (int i = 0; i < progreso; i++)
    {
        printf("Mayor promedio es de : %d", progreso[i]);
    }

    return 0;
}
