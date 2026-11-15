#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fibonacci(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int quantidade, i;

    printf("Digite a quantidade de termos: ");

    if (scanf("%d", &quantidade) != 1) {
        printf("Entrada invalida!\n");

    } else if (quantidade <= 0) {
        printf("A quantidade deve ser positiva!\n");

    } else {
        printf("Sequencia de Fibonacci:\n");
        for (i = 0; i < quantidade; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

long fibonacci(int n)
{
    /* Casos base: fibonacci(0) = 0 e fibonacci(1) = 1 */
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    /* Passo recursivo: soma dos dois termos anteriores */
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Por que a versao recursiva e lenta para valores grandes de n:
   cada chamada gera duas novas chamadas, e os mesmos termos sao
   recalculados varias vezes (fibonacci(n-2), por exemplo, e calculado
   dentro de fibonacci(n) e tambem dentro de fibonacci(n-1)).
   O numero de chamadas cresce de forma exponencial com n. */
