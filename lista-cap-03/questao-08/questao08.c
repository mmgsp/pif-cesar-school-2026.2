#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota;

    do
    {
        printf("Digite uma nota entre 0.0 e 10.0: ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0)
        {
            printf("Erro: nota inválida! Tente novamente.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("\nNota registrada com sucesso!\n");

    system("pause");

    return 0;
}
