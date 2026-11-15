#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehBissexto(int ano);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int ano;

    printf("Digite um ano: ");

    if (scanf("%d", &ano) != 1) {
        printf("Entrada invalida!\n");

    } else if (ehBissexto(ano)) {
        printf("O ano %d e bissexto.\n", ano);

    } else {
        printf("O ano %d nao e bissexto.\n", ano);
    }

    system("pause");
    return 0;
}

int ehBissexto(int ano)
{
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }

    return 0;
}
