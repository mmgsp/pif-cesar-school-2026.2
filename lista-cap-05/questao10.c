#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define PI 3.14159f

float area(float r);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float raio, resultado;

    printf("Digite o raio da esfera: ");

    if (scanf("%f", &raio) != 1) {
        printf("Entrada invalida!\n");

    } else if (raio < 0.0f) {
        printf("O raio nao pode ser negativo!\n");

    } else {
        resultado = area(raio);
        printf("Area da esfera: %.2f\n", resultado);
    }

    system("pause");
    return 0;
}

float area(float r)
{
    return 4.0f * PI * r * r;
}
