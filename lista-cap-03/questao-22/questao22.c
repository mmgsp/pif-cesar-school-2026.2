#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n, linha, coluna;
    int numero = 1;

    printf("Digite o número de linhas do Triângulo de Floyd: ");
    scanf("%d", &n);

    printf("\n");

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    system("pause");

    return 0;
}
