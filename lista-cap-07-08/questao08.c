#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define L 3
#define C 4

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int m[L][C], t[C][L];
    int i, j;

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            t[j][i] = m[i][j];
        }
    }

    printf("\nMatriz original (%dx%d):\n", L, C);
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%6d", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta (%dx%d):\n", C, L);
    for (i = 0; i < C; i++)
    {
        for (j = 0; j < L; j++)
        {
            printf("%6d", t[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
