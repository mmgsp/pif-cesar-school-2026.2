#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float a, b, c, delta, x1, x2;

    do {
        printf("Digite o coeficiente a (diferente de zero): ");
        if (scanf("%f", &a) != 1) {
            printf("Entrada invalida!\n");
            return 1;
        }
        if (a == 0.0f) {
            printf("O coeficiente a nao pode ser zero.\n");
        }
    } while (a == 0.0f);

    printf("Digite os coeficientes b e c: ");
    if (scanf("%f %f", &b, &c) != 2) {
        printf("Entrada invalida!\n");
    } else {
        delta = b * b - 4.0f * a * c;
        printf("Delta: %.2f\n", delta);

        if (delta < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else if (delta == 0.0f) {
            x1 = -b / (2 * a);
            printf("Raiz unica: %.2f\n", x1);
        } else {
            x1 = (-b + sqrtf(delta)) / (2 * a);
            x2 = (-b - sqrtf(delta)) / (2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    system("pause");
    return 0;
}
