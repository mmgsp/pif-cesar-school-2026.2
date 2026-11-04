#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float trabalho, avaliacao, exame, media;

    printf("Nota do Trabalho de Laboratorio: ");
    if (scanf("%f", &trabalho) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Nota da Avaliacao Semestral: ");

        if (scanf("%f", &avaliacao) != 1) {
            printf("Entrada invalida!\n");

        } else {
            printf("Nota do Exame Final: ");

            if (scanf("%f", &exame) != 1) {
                printf("Entrada invalida!\n");

            } else {
                media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10.0f;
                printf("Media ponderada: %.2f\n", media);

                if (media < 3.0f) {
                    printf("Situacao: Reprovado\n");

                } else if (media < 5.0f) {
                    printf("Situacao: Em Recuperacao\n");

                } else {
                    printf("Situacao: Aprovado\n");
                    
                }
            }
        }
    }

    system("pause");
    return 0;
}
