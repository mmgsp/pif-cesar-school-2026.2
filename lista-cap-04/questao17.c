#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float valor_compra, valor_final, comissao;
    int opcao;

    printf("Valor total da compra: R$ ");
    if (scanf("%f", &valor_compra) != 1 || valor_compra < 0) {
        printf("Valor invalido!\n");
    } else {
        printf("Pagamento (1 = a vista; 2 = parcelado em 3x): ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
        } else {
            switch (opcao) {
                case 1:
                    valor_final = valor_compra * 0.90f;
                    comissao = valor_final * 0.05f;
                    printf("Valor com desconto: R$ %.2f\n", valor_final);
                    printf("Comissao: R$ %.2f\n", comissao);
                    break;
                case 2:
                    valor_final = valor_compra / 3.0f;
                    comissao = valor_compra * 0.05f;
                    printf("3 parcelas de R$ %.2f\n", valor_final);
                    printf("Comissao: R$ %.2f\n", comissao);
                    break;
                default:
                    printf("Opcao de pagamento invalida!\n");
            }
        }
    }

    system("pause");
    return 0;
}
