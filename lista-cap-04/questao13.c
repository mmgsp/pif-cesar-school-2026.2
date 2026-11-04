#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char operacao;
    float numero1, numero2, resultado = 0.0f;
    int valido = 1;

    printf("Operacoes: +  -  *  /  ^\n");
    printf("Escolha a operacao: ");
    if (scanf(" %c", &operacao) != 1) {
        printf("Entrada invalida!\n");
    } else {
        printf("Digite os dois operandos: ");
        if (scanf("%f %f", &numero1, &numero2) != 2) {
            printf("Entrada invalida!\n");
        } else {
            switch (operacao) {
                case '+': resultado = numero1 + numero2; break;
                case '-': resultado = numero1 - numero2; break;
                case '*': resultado = numero1 * numero2; break;
                case '/':
                    if (numero2 == 0.0f) {
                        printf("Erro: divisao por zero!\n");
                        valido = 0;
                    } else {
                        resultado = numero1 / numero2;
                    }
                    break;
                case '^': resultado = powf(numero1, numero2); break;
                default:
                    printf("Operacao invalida!\n");
                    valido = 0;
            }

            if (valido) {
                printf("Resultado: %.2f\n", resultado);
            }
        }
    }

    system("pause");
    return 0;
}
