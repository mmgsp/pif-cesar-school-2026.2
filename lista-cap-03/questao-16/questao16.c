#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int senha_secreta = 2026;
    int tentativa;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 3 && !acertou)
    {
        printf("Digite a senha (tentativa %d de 3): ", tentativas + 1);
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa == senha_secreta)
        {
            acertou = 1;
        }
        else
        {
            printf("Senha incorreta!\n\n");
        }
    }

    if (acertou)
    {
        printf("\nAcesso Concedido!");
        printf("\nTentativas utilizadas: %d\n", tentativas);
    }
    else
    {
        printf("\nConta Bloqueada por Segurança!\n");
    }

    system("pause");

    return 0;
}
