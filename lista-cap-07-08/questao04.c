#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int dmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dia, mes, i, decorridos, faltam;

    printf("Digite o dia: ");
    if (scanf("%d", &dia) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Digite o mes (1 a 12): ");

        if (scanf("%d", &mes) != 1) {
            printf("Entrada invalida!\n");

        } else if (mes < 1 || mes > 12) {
            printf("Mes invalido!\n");

        } else if (dia < 1 || dia > dmes[mes - 1]) {
            printf("Dia invalido para este mes!\n");

        } else {
            /* soma os meses completos anteriores e o dia atual (1 de janeiro = dia 1) */
            decorridos = dia;
            for (i = 0; i < mes - 1; i++)
            {
                decorridos += dmes[i];
            }
            faltam = 365 - decorridos;

            printf("Dias corridos desde 1 de janeiro: %d\n", decorridos);
            printf("Dias que faltam para o fim do ano: %d\n", faltam);
        }
    }

    system("pause");
    return 0;
}
