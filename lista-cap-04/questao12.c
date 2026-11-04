#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    printf("Digite um numero de 1 a 7: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Erro: Opcao invalida!\n");
    } else {
        switch (opcao) {
            case 1: printf("Domingo\n"); break;
            case 2: printf("Segunda-feira\n"); break;
            case 3: printf("Terca-feira\n"); break;
            case 4: printf("Quarta-feira\n"); break;
            case 5: printf("Quinta-feira\n"); break;
            case 6: printf("Sexta-feira\n"); break;
            case 7: printf("Sabado\n"); break;
            default: printf("Erro: Opcao Invalida!\n");
        }
    }

    system("pause");
    return 0;
}
