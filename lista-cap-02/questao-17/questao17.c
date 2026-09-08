#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    const float PI = 3.141593;
    float raio, area, circunferencia;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("\nÁrea do círculo: %.2f", area);
    printf("\nCircunferência do círculo: %.2f\n", circunferencia);

    system("pause");

    return 0;
}