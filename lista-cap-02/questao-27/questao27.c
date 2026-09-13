#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int n1, n2, n3;

    printf("Gerando 3 números aleatórios de 1 a 6:\n\n");

    n1 = (rand() % 6) + 1;
    n2 = (rand() % 6) + 1;
    n3 = (rand() % 6) + 1;

    printf("%d\n%d\n%d\n\n", n1, n2, n3);
  
    system("pause");

    return 0;
}