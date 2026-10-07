#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    printf("Sorteei uma letra minúscula entre 'a' e 'z'. Tente adivinhar!\n\n");

    do
    {
        printf("Digite sua tentativa: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta)
        {
            printf("Dica: a letra secreta vem depois de '%c' no alfabeto.\n\n", palpite);
        }
        else if (palpite > secreta)
        {
            printf("Dica: a letra secreta vem antes de '%c' no alfabeto.\n\n", palpite);
        }
    } while (palpite != secreta);

    printf("\nParabéns! Você acertou a letra '%c' em %d tentativa(s).\n", secreta, tentativas);

    system("pause");

    return 0;
}
