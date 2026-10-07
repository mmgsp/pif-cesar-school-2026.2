#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int l, i, j;

    do
    {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);

        if (l < 3 || l > 20)
        {
            printf("Erro: o lado deve estar entre 3 e 20.\n\n");
        }
    } while (l < 3 || l > 20);

    printf("\n");

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            if (i == 0 || i == l - 1 || j == 0 || j == l - 1)
            {
                printf("X");
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
