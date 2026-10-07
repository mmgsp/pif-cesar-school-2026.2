#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n, i;
    long long int anterior = 1, atual = 1, termo = 1;

    do
    {
        printf("Digite o número do termo desejado (1 a 92): ");
        scanf("%d", &n);

        if (n < 1 || n > 92)
        {
            printf("Erro: digite um valor entre 1 e 92.\n\n");
        }
    } while (n < 1 || n > 92);

    printf("\nTermos da sequência até N = %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        if (i <= 2)
        {
            termo = 1;
        }
        else
        {
            termo = anterior + atual;
            anterior = atual;
            atual = termo;
        }

        printf("%lld ", termo);
    }

    printf("\n\nO termo %d da sequência de Fibonacci é: %lld\n", n, termo);

    system("pause");

    return 0;
}
