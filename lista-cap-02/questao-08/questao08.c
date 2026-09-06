#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, quadrado;
    float decima_parte;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decima_parte = (float)numero / 10;

    printf("\n%d ao quadrado: %d", numero, quadrado);
    printf("\nDécima parte de %d: %.2f", numero, decima_parte);
    printf("\n");

    system("pause");

    return 0;
} 
