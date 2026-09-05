#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\nNúmero na base decimal: %d", numero);
    printf("\nNúmero na base hexadecimal: %x", numero);
    printf("\nNúmero na base octal: %o", numero);
    printf("\nCaractere correspondente na tabela ASCII: %c", numero);

    printf("\n\n");

    system("pause");

    return 0;
} 
