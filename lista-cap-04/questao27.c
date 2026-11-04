#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int horas;
    float valor;

    printf("Digite o total de horas de permanencia: ");
    if (scanf("%d", &horas) != 1 || horas < 0) {
        printf("Quantidade de horas invalida!\n");
    } else {
        if (horas <= 2) {
            valor = horas * 2.0f;
        } else if (horas <= 4) {
            valor = 2 * 2.0f + (horas - 2) * 2.5f;
        } else {
            valor = 2 * 2.0f + 2 * 2.5f + (horas - 4) * 3.0f;
        }
        printf("Tempo total: %d horas\n", horas);
        printf("Valor do ticket: R$ %.2f\n", valor);
    }

    system("pause");
    return 0;
}
