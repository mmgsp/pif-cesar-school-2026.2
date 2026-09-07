#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float a, b, c, p, area;

    printf("Digite o lado A do triângulo: ");
    scanf("%f", &a);

    printf("Digite o lado B do triângulo: ");
    scanf("%f", &b);

    printf("Digite o lado C do triângulo: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("\nArea do triângulo: %.2f\n", area);

    system("pause");

    return 0;
}