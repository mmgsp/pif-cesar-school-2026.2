#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida!\n");
    } else {
        if (numero % 2 == 0) {
            printf("O numero e PAR.\n");
        } else {
            printf("O numero e IMPAR.\n");
        }

        if (numero > 0) {
            printf("O numero e POSITIVO.\n");
        } else if (numero < 0) {
            printf("O numero e NEGATIVO.\n");
        } else {
            printf("O numero e ZERO.\n");
        }
    }

    system("pause");
    return 0;
}
