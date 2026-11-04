#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Opcao invalida!\n");
    } else {
        switch (opcao) {
            case 1: printf("Direcionando para consulta de saldo...\n"); break;
            case 2: printf("Direcionando para emissao de extrato...\n"); break;
            case 3: printf("Direcionando para transferencia...\n"); break;
            case 4: printf("Direcionando para atendimento...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    }

    system("pause");
    return 0;
}
