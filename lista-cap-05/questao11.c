#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPar(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida!\n");

    } else if (ehPar(numero)) {
        printf("O numero %d e par.\n", numero);

    } else {
        printf("O numero %d e impar.\n", numero);
    }

    system("pause");
    return 0;
}

int ehPar(int n)
{
    if (n % 2 == 0) {
        return 1;
    }

    return 0;
}
