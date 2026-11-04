#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final (0 a 10): ");
    if (scanf("%f", &nota) != 1) {
        printf("Entrada invalida!\n");
    } else {
        printf("Digite a quantidade de faltas: ");
        if (scanf("%d", &faltas) != 1 || nota < 0 || nota > 10 || faltas < 0) {
            printf("Dados invalidos!\n");
        } else {
            if (nota < 4.0f) {
                conceito = 'E';
            } else if (nota < 5.0f) {
                conceito = (faltas <= 20) ? 'D' : 'E';
            } else if (nota < 7.5f) {
                conceito = (faltas <= 20) ? 'C' : 'D';
            } else if (nota < 9.0f) {
                conceito = (faltas <= 20) ? 'B' : 'C';
            } else {
                conceito = (faltas <= 20) ? 'A' : 'B';
            }
            printf("Conceito: %c\n", conceito);
        }
    }

    system("pause");
    return 0;
}
