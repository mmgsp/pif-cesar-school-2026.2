#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int velocidade_kmh;
    float velocidade_ms;

    printf("Digite a velocidade em km/h: ");
    scanf("%d", &velocidade_kmh);

    velocidade_ms = velocidade_kmh / 3.6;

    printf("Velocidade convertida: %.2f m/s\n", velocidade_ms);

    system("pause");

    return 0;
}