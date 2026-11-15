#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int soma(int a, int b);

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
            resultado = soma(n1, n2);
            printf("Soma: %d\n", resultado);
        }
    }

    system("pause");
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}
