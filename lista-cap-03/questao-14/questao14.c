#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int i, quadrado;
    int soma = 0;

    for (i = 1; i <= 100; i++)
    {
        quadrado = i * i;
        soma += quadrado;
        printf("%d -> %d\n", i, quadrado);
    }

    printf("\nSoma total dos quadrados: %d\n", soma);

    system("pause");

    return 0;
}
