#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define JOGOS 5
#define DEZENAS 6

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int jogos[JOGOS][DEZENAS];
    int i, j, k, numero, repetido;

    for (i = 0; i < JOGOS; i++)
    {
        for (j = 0; j < DEZENAS; j++)
        {
            do
            {
                numero = rand() % 60 + 1;
                repetido = 0;

                /* confere se a dezena ja saiu neste mesmo jogo */
                for (k = 0; k < j; k++)
                {
                    if (jogos[i][k] == numero)
                    {
                        repetido = 1;
                    }
                }
            } while (repetido);

            jogos[i][j] = numero;
        }
    }

    printf("Jogos gerados:\n\n");
    for (i = 0; i < JOGOS; i++)
    {
        printf("Jogo %d: ", i + 1);
        for (j = 0; j < DEZENAS; j++)
        {
            printf("%02d ", jogos[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
