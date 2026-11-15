#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;
    long resultadoIt, resultadoRec;

    printf("Digite um inteiro nao negativo (maximo 12): ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida!\n");

    } else if (numero < 0 || numero > 12) {
        /* O limite 12 evita overflow do tipo long (32 bits no Windows) */
        printf("Numero fora do intervalo permitido (0 a 12)!\n");

    } else {
        resultadoIt = fatorialIterativo(numero);
        resultadoRec = fatorialRecursivo(numero);

        printf("Fatorial iterativo: %ld\n", resultadoIt);
        printf("Fatorial recursivo: %ld\n", resultadoRec);

        if (resultadoIt == resultadoRec) {
            printf("Os resultados coincidem.\n");
        } else {
            printf("Os resultados sao diferentes.\n");
        }
    }

    system("pause");
    return 0;
}

long fatorialIterativo(int n)
{
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

long fatorialRecursivo(int n)
{
    /* Caso base */
    if (n == 0) {
        return 1;
    }

    /* Passo recursivo */
    return (long)n * fatorialRecursivo(n - 1);
}
