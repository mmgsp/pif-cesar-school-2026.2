#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int num, i;
    int encontrou = 0;

    printf("Digite um número limite inteiro positivo: ");
    scanf("%d", &num);

    printf("\nMúltiplos de 3 e de 5 entre 1 e %d:\n", num);

    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou)
    {
        printf("Nenhum número satisfaz a condição.");
    }

    printf("\n");

    system("pause");

    return 0;
}
