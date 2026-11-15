#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2;

    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &n1) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Digite o segundo numero inteiro: ");

        if (scanf("%d", &n2) != 1) {
            printf("Entrada invalida!\n");

        } else {
            printf("Quadrado de %d: %d\n", n1, SQR(n1));
            printf("Quadrado de %d: %d\n", n2, SQR(n2));
            printf("Maior: %d\n", MAX(n1, n2));
            printf("Menor: %d\n", MIN(n1, n2));
        }
    }

    system("pause");
    return 0;
}
