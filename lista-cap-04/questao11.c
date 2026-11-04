#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a, b, c, auxiliar;

    printf("Digite tres numeros inteiros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada invalida!\n");
    } else {
        if (a > b) {
            auxiliar = a;
            a = b;
            b = auxiliar;
        }
        if (a > c) {
            auxiliar = a;
            a = c;
            c = auxiliar;
        }
        if (b > c) {
            auxiliar = b;
            b = c;
            c = auxiliar;
        }

        printf("Valores em ordem: %d, %d, %d\n", a, b, c);
        if (a == b || b == c) {
            printf("Ha valores iguais; a ordem nao e estritamente crescente.\n");
        }
    }

    system("pause");
    return 0;
}
