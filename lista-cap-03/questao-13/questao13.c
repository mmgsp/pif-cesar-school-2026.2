#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n, i;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Erro: não existe fatorial de número negativo.\n");
    }
    else if (n > 20)
    {
        printf("Erro: o fatorial de %d ultrapassa o limite do tipo long long int (máximo: 20).\n", n);
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);
    }

    system("pause");

    return 0;
}
