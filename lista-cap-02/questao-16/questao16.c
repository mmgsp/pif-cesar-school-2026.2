#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int qtde_degrau;
    float tamanho_degrau, escada_metros, escada_centimetros;

    printf("Digite o tamanho do degrau (em cm): ");
    scanf("%f", &tamanho_degrau);

    printf("\nDigite o tamanho da escada (em m): ");
    scanf("%f", &escada_metros);

    escada_centimetros = escada_metros * 100;
    qtde_degrau = ceil(escada_centimetros/tamanho_degrau);

    printf("\nA quantidade mínima de degraus de %.2f centímetros para uma escada de %.2f metros é: %d\n", tamanho_degrau, escada_metros, qtde_degrau);

    system("pause");

    return 0;
}