#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char caractere;

    printf("Digite um caractere: ");
    caractere = getchar();

    printf("\nCaractere %c na tabela ASCII: %d\n", caractere, caractere);

    /* O código ASCII é o valor inteiro associado ao caractere na tabela ASCII. 
    Como char representa um valor numérico, ele pode ser exibido como inteiro 
    utilizando o especificador de formato %d. */

    system("pause");

    return 0;
}