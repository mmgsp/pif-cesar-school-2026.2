#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPrimo(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, i;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida!\n");

    } else {
        if (ehPrimo(numero)) {
            printf("O numero %d e primo.\n", numero);
        } else {
            printf("O numero %d nao e primo.\n", numero);
        }

        printf("\nNumeros primos de 1 ate 50:\n");
        for (i = 1; i <= 50; i++) {
            if (ehPrimo(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

int ehPrimo(int n)
{
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
