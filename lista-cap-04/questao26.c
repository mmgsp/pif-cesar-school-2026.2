#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int mes, ano, dias;
    const char *nome_mes;

    printf("Digite o numero do mes e o ano: ");
    if (scanf("%d %d", &mes, &ano) != 2 || ano <= 0) {
        printf("Dados invalidos!\n");
    } else {
        switch (mes) {
            case 1: nome_mes = "janeiro"; dias = 31; break;
            case 2:
                nome_mes = "fevereiro";
                if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                    dias = 29;
                } else {
                    dias = 28;
                }
                break;
            case 3: nome_mes = "marco"; dias = 31; break;
            case 4: nome_mes = "abril"; dias = 30; break;
            case 5: nome_mes = "maio"; dias = 31; break;
            case 6: nome_mes = "junho"; dias = 30; break;
            case 7: nome_mes = "julho"; dias = 31; break;
            case 8: nome_mes = "agosto"; dias = 31; break;
            case 9: nome_mes = "setembro"; dias = 30; break;
            case 10: nome_mes = "outubro"; dias = 31; break;
            case 11: nome_mes = "novembro"; dias = 30; break;
            case 12: nome_mes = "dezembro"; dias = 31; break;
            default:
                printf("Mes invalido!\n");
                return 0;
        }
        printf("%s: %d dias\n", nome_mes, dias);
    }

    system("pause");
    return 0;
}
