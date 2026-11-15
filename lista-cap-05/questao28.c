#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float preco, subtotal, total, pago;
    int quantidade, pagamento;

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("Forma de pagamento (1 - A vista com 10%% de desconto, 2 - A prazo): ");
    scanf("%d", &pagamento);

    if (preco < 0.0f || quantidade <= 0 || (pagamento != 1 && pagamento != 2)) {
        printf("Dados invalidos!\n");

    } else {
        subtotal = calculaSubtotal(preco, quantidade);
        total = aplicaDesconto(subtotal, pagamento);

        printf("Subtotal: R$ %.2f\n", subtotal);
        printf("Total a pagar: R$ %.2f\n", total);

        printf("Digite o valor pago: ");
        scanf("%f", &pago);

        if (pago < total) {
            printf("Valor pago insuficiente!\n");
        } else {
            printf("Troco: R$ %.2f\n", calculaTroco(total, pago));
        }
    }

    system("pause");
    return 0;
}

float calculaSubtotal(float preco, int quantidade)
{
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento)
{
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }

    return valor;
}

float calculaTroco(float total, float pago)
{
    return pago - total;
}
