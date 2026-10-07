#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float valor, soma = 0.0, media;
    int quantidade = 0;

    do
    {
        printf("Digite um valor real positivo (negativo para encerrar): ");
        scanf("%f", &valor);

        if (valor >= 0.0)
        {
            soma += valor;
            quantidade++;
        }
    } while (valor >= 0.0);

    printf("\nQuantidade de valores válidos: %d", quantidade);
    printf("\nSoma total: %.2f", soma);

    if (quantidade > 0)
    {
        media = soma / quantidade;
        printf("\nMédia aritmética: %.2f\n", media);
    }
    else
    {
        printf("\nNenhum valor válido foi digitado, não é possível calcular a média.\n");
    }

    system("pause");

    return 0;
}
