#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float l, b, h;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &l);
    area_quadrado = l * l;

    printf("Digite a base do retângulo: ");
    scanf("%f", &b);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &h);
    area_retangulo = b * h;

    printf("Digite a base do triângulo: ");
    scanf("%f", &b);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &h);
    area_triangulo = (b * h) / 2.0;

    printf("\nÁrea do quadrado: %.2f", area_quadrado);
    printf("\nÁrea do retângulo: %.2f", area_retangulo);
    printf("\nÁrea do triângulo retângulo: %.2f\n", area_triangulo);

    system("pause");

    return 0;
}

