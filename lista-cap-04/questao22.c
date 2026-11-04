#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float valor, aliquota, valor_final;
    int estado;

    printf("Valor do produto: R$ ");
    if (scanf("%f", &valor) != 1 || valor < 0) {
        printf("Valor invalido!\n");
    } else {
        printf("Destino (1 = MG; 2 = SP; 3 = RJ; 4 = MS): ");
        if (scanf("%d", &estado) != 1) {
            printf("Codigo invalido!\n");
        } else {
            switch (estado) {
                case 1: aliquota = 0.07f; break;
                case 2: aliquota = 0.12f; break;
                case 3: aliquota = 0.15f; break;
                case 4: aliquota = 0.08f; break;
                default:
                    printf("Erro: codigo de estado invalido!\n");
                    return 0;
            }
            valor_final = valor * (1.0f + aliquota);
            printf("Preco final com imposto: R$ %.2f\n", valor_final);
        }
    }

    system("pause");
    return 0;
}
