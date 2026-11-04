#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float distancia, litros, consumo;

    printf("Distancia percorrida (km): ");
    if (scanf("%f", &distancia) != 1) {
        printf("Entrada invalida!\n");
    } else {
        printf("Litros de gasolina consumidos: ");
        if (scanf("%f", &litros) != 1 || distancia <= 0 || litros <= 0) {
            printf("Valores invalidos! Informe valores maiores que zero.\n");
        } else {
            consumo = distancia / litros;
            printf("Consumo: %.2f km/l\n", consumo);

            if (consumo < 8.0f) {
                printf("Venda o carro!\n");
            } else if (consumo <= 14.0f) {
                printf("Economico!\n");
            } else {
                printf("Super economico!\n");
            }
        }
    }

    system("pause");
    return 0;
}
