#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float n1, n2;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida!\n");

    } else if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");

    } else {
        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", soma(n1, n2));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrai(n1, n2));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplica(n1, n2));
                break;
            case 4:
                /* Validacao da divisao por zero antes de chamar a funcao */
                if (n2 == 0.0f) {
                    printf("Erro: divisao por zero!\n");
                } else {
                    printf("Resultado: %.2f\n", divide(n1, n2));
                }
                break;
        }
    }

    system("pause");
    return 0;
}

float soma(float a, float b)
{
    return a + b;
}

float subtrai(float a, float b)
{
    return a - b;
}

float multiplica(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}
