#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float temperatura, convertida;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha a conversao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Opcao invalida!\n");
    } else if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
    } else {
        printf("Digite a temperatura: ");
        if (scanf("%f", &temperatura) != 1) {
            printf("Temperatura invalida!\n");
        } else {
            switch (opcao) {
                case 1: convertida = temperatura * 1.8f + 32.0f; break;
                case 2: convertida = temperatura + 273.15f; break;
                case 3: convertida = (temperatura - 32.0f) / 1.8f; break;
                case 4: convertida = temperatura - 273.15f; break;
            }
            printf("Temperatura convertida: %.2f\n", convertida);
        }
    }

    system("pause");
    return 0;
}
