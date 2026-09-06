#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    const float PI = 3.141593;
    float graus, radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("\nO ângulo %.2f graus equivale a %.2f radianos.", graus, radianos);
    printf("\n");

    system("pause");

    return 0;
}
