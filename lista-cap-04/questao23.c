#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int dia, mes, ano;
    const char *nome_mes;

    printf("Digite dia, mes e ano: ");
    if (scanf("%d %d %d", &dia, &mes, &ano) != 3) {
        printf("Data invalida!\n");
    } else {
        switch (mes) {
            case 1: nome_mes = "janeiro"; break;
            case 2: nome_mes = "fevereiro"; break;
            case 3: nome_mes = "marco"; break;
            case 4: nome_mes = "abril"; break;
            case 5: nome_mes = "maio"; break;
            case 6: nome_mes = "junho"; break;
            case 7: nome_mes = "julho"; break;
            case 8: nome_mes = "agosto"; break;
            case 9: nome_mes = "setembro"; break;
            case 10: nome_mes = "outubro"; break;
            case 11: nome_mes = "novembro"; break;
            case 12: nome_mes = "dezembro"; break;
            default:
                printf("Mes invalido!\n");
                return 0;
        }
        printf("%d de %s de %d\n", dia, nome_mes, ano);
    }

    system("pause");
    return 0;
}
