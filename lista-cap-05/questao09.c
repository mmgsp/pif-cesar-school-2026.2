#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior(int a, int b);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &n1) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Digite o segundo numero inteiro: ");

        if (scanf("%d", &n2) != 1) {
            printf("Entrada invalida!\n");

        } else {
            resultado = maior(n1, n2);
            printf("O maior valor e: %d\n", resultado);
        }
    }

    system("pause");
    return 0;
}

int maior(int a, int b)
{
    if (a > b) {
        return a;
    }

    return b;
}
