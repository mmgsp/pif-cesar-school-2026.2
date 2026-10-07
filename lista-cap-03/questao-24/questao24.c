#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n, i, j;

    do
    {
        printf("Digite uma dimensão ímpar (3 a 19): ");
        scanf("%d", &n);

        if (n < 3 || n > 19 || n % 2 == 0)
        {
            printf("Erro: digite um número ímpar entre 3 e 19.\n\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    system("pause");

    return 0;
}
