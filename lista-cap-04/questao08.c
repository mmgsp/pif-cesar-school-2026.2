#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int ano;

    printf("Digite um ano: ");
    if (scanf("%d", &ano) != 1 || ano <= 0) {

        printf("Ano invalido!\n");

    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {

        printf("O ano %d e bissexto.\n", ano);

    } else {

        printf("O ano %d nao e bissexto.\n", ano);
        
    }

    system("pause");
    return 0;
}
