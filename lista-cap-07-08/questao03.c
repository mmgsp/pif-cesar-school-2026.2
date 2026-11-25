#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define LANCAMENTOS 30
#define FACES 6

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int dado[LANCAMENTOS];
    int freq[FACES] = {0};
    int i;

    for (i = 0; i < LANCAMENTOS; i++)
    {
        dado[i] = rand() % 6 + 1;
        freq[dado[i] - 1]++;
    }

    printf("Lancamentos: ");
    for (i = 0; i < LANCAMENTOS; i++)
    {
        printf("%d ", dado[i]);
    }
    printf("\n\n");

    for (i = 0; i < FACES; i++)
    {
        printf("Face %d: %d vezes\n", i + 1, freq[i]);
    }

    system("pause");
    return 0;
}
