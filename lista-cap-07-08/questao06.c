#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define L 3
#define C 3

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a[L][C], b[L][C], soma[L][C];
    int i, j;

    printf("--- Matriz A ---\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n--- Matriz B ---\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            soma[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nMatriz A:\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%6d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz A + B:\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%6d", soma[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
