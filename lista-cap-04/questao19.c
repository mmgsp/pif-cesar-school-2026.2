#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Entrada invalida!\n");
    } else if (a <= 0.0f || b <= 0.0f || c <= 0.0f ||
               a >= b + c || b >= a + c || c >= a + b) {
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");
    } else if (a == b && b == c) {
        printf("Triangulo equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles.\n");
    } else {
        printf("Triangulo escaleno.\n");
    }

    system("pause");
    return 0;
}
