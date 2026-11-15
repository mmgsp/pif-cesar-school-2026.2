#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2;

    printf("Digite o primeiro inteiro positivo: ");
    if (scanf("%d", &n1) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Digite o segundo inteiro positivo: ");

        if (scanf("%d", &n2) != 1) {
            printf("Entrada invalida!\n");

        } else if (n1 <= 0 || n2 <= 0) {
            printf("Os numeros devem ser positivos!\n");

        } else {
            printf("MDC(%d, %d) = %d\n", n1, n2, mdc(n1, n2));
            simplifica(n1, n2);
        }
    }

    system("pause");
    return 0;
}

int mdc(int a, int b)
{
    /* Caso base: quando o resto e zero, o MDC e o outro numero */
    if (b == 0) {
        return a;
    }

    /* Passo recursivo (Euclides): mdc(a, b) = mdc(b, a % b) */
    return mdc(b, a % b);
}

void simplifica(int num, int den)
{
    int divisor = mdc(num, den);

    printf("Fracao original: %d/%d\n", num, den);
    printf("Fracao simplificada: %d/%d\n", num / divisor, den / divisor);
}
