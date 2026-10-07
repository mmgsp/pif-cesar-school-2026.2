#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Com cédulas de 5 e 2, só não é possível compor os valores 1 e 3
int possivel(int valor)
{
    return valor == 0 || valor == 2 || valor >= 4;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int cedulas[6] = {100, 50, 20, 10, 5, 2};
    int valor, i, quantidade;

    printf("Digite o valor do saque (inteiro positivo): ");
    scanf("%d", &valor);

    if (valor <= 0)
    {
        printf("Erro: digite um valor inteiro positivo.\n");
    }
    else if (!possivel(valor))
    {
        printf("Não é possível compor R$ %d com as cédulas disponíveis.\n", valor);
    }
    else
    {
        printf("\nCédulas necessárias:\n");

        for (i = 0; i < 6; i++)
        {
            quantidade = 0;

            // Subtrações sucessivas, sem deixar um restante impossível de compor
            while (valor >= cedulas[i] && possivel(valor - cedulas[i]))
            {
                valor -= cedulas[i];
                quantidade++;
            }

            if (quantidade > 0)
            {
                printf("%d cédula(s) de R$ %d\n", quantidade, cedulas[i]);
            }
        }
    }

    system("pause");

    return 0;
}
