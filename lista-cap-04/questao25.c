#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int valor_pagar, valor_entregue, troco;
    int qtd100, qtd50, qtd20, qtd10, qtd5, qtd2;

    printf("Valor total a pagar: R$ ");
    if (scanf("%d", &valor_pagar) != 1 || valor_pagar < 0) {
        printf("Valor invalido!\n");
    } else {
        printf("Valor entregue pelo cliente: R$ ");
        if (scanf("%d", &valor_entregue) != 1 || valor_entregue < 0) {
            printf("Valor invalido!\n");
        } else if (valor_entregue < valor_pagar) {
            printf("Erro: valor entregue insuficiente!\n");
        } else {
            troco = valor_entregue - valor_pagar;
            printf("Troco: R$ %d\n", troco);

            if (troco == 0) {
                printf("Nao ha troco.\n");
            } else {
                qtd100 = troco / 100; troco %= 100;
                qtd50 = troco / 50; troco %= 50;
                qtd20 = troco / 20; troco %= 20;

                if (troco == 1 || troco == 3) {
                    printf("Nao e possivel devolver esse valor usando somente as cedulas disponiveis.\n");
                } else {
                    if (troco == 11 || troco == 13) {
                        qtd10 = 0;
                        qtd5 = 1;
                        troco -= 5;
                    } else {
                        qtd10 = troco / 10;
                        troco %= 10;
                        qtd5 = troco / 5;
                        troco %= 5;
                    }
                    qtd2 = troco / 2;

                    printf("Cedulas de R$ 100: %d\n", qtd100);
                    printf("Cedulas de R$ 50: %d\n", qtd50);
                    printf("Cedulas de R$ 20: %d\n", qtd20);
                    printf("Cedulas de R$ 10: %d\n", qtd10);
                    printf("Cedulas de R$ 5: %d\n", qtd5);
                    printf("Cedulas de R$ 2: %d\n", qtd2);
                }
            }
        }
    }

    system("pause");
    return 0;
}
