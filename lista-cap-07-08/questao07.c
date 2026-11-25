#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define N 4

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int m[N][N];
    int i, j;
    int diagPrincipal = 0, diagSecundaria = 0, acima = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            m[i][j] = rand() % 20 + 1;

            if (i == j)
            {
                diagPrincipal += m[i][j];
            }
            if (i + j == N - 1)
            {
                diagSecundaria += m[i][j];
            }
            if (j > i)
            {
                acima += m[i][j];
            }
        }
    }

    printf("Matriz %dx%d:\n", N, N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma da diagonal principal: %d\n", diagPrincipal);
    printf("Soma da diagonal secundaria: %d\n", diagSecundaria);
    printf("Soma dos elementos acima da diagonal principal: %d\n", acima);

    system("pause");
    return 0;
}
