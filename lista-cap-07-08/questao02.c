#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define TAMANHO 15

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int vet[TAMANHO];
    int num, n = 0, i;

    do {
        printf("Numero: ");
        scanf("%d", &num);
        if (num != 0) {
            if (n == TAMANHO) { printf("BUFFER LOTADO\n"); break; }
            vet[n++] = num;
        }
    } while (num != 0);

    if (n == 0)
    {
        printf("Nenhum numero foi armazenado.\n");
    }
    else
    {
        printf("\nValores na ordem inversa:\n");
        for (i = n - 1; i >= 0; i--)
        {
            printf("%d\n", vet[i]);
        }
    }

    system("pause");
    return 0;
}
