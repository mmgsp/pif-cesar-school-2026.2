#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem_for()
{
    int i;

    printf("Versão com for:\n");
    for (i = 0; i <= 100; i++)
    {
        printf("%d ", i);
    }
    printf("\n\n");
}

void contagem_while()
{
    int i = 0;

    printf("Versão com while:\n");
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
}

void contagem_do_while()
{
    int i = 0;

    printf("Versão com do-while:\n");
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    contagem_for();
    contagem_while();
    contagem_do_while();

    system("pause");

    return 0;
}

/*
Resposta: A estrutura mais adequada para este caso é o for, porque o número de
repetições é conhecido de antemão (de 0 a 100). Nele, a inicialização, o teste
e o incremento ficam reunidos no cabeçalho, deixando o código mais curto e
legível, e reduzindo o risco de esquecer o incremento, o que causaria um laço
infinito no while e no do-while.
*/
