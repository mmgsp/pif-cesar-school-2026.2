#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char maiuscula, minuscula;

    printf("Digite um caractere: ");
    maiuscula = getchar();

    minuscula = maiuscula + 32;

    printf("\nMaiúscula: %c\nMinúscula: %c\n", maiuscula, minuscula);

    system("pause");

    return 0;
}