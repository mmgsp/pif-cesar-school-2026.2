#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsius(float fahr);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float fahrenheit, resultado;

    printf("Digite a temperatura em graus Fahrenheit: ");

    if (scanf("%f", &fahrenheit) != 1) {
        printf("Entrada invalida!\n");

    } else {
        resultado = celsius(fahrenheit);
        printf("Temperatura em Celsius: %.2f\n", resultado);
    }

    system("pause");
    return 0;
}

float celsius(float fahr)
{
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
