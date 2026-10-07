#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n, i;
    int divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro: digite um número inteiro positivo.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisores++;
            }
        }

        printf("Quantidade de divisores de %d: %d\n", n, divisores);

        if (divisores == 2)
        {
            printf("%d é um número primo.\n", n);
        }
        else
        {
            printf("%d não é um número primo.\n", n);
        }
    }

    system("pause");

    return 0;
}
