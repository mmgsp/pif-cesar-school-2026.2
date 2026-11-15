#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somaDigitos(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um numero inteiro positivo: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida!\n");

    } else if (numero < 0) {
        printf("O numero deve ser positivo!\n");

    } else {
        printf("Soma dos digitos: %d\n", somaDigitos(numero));
    }

    system("pause");
    return 0;
}

int somaDigitos(int n)
{
    /* Caso base: quando n e zero, nao ha mais digitos para somar */
    if (n == 0) {
        return 0;
    }

    /* Passo recursivo: soma o ultimo digito (n % 10) com a soma
       dos digitos do restante do numero (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
