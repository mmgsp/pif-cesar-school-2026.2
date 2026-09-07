#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota1, nota2, nota3, nota4;
    float media_simples, media_ponderada;

    printf("Digite a nota da prova 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota da prova 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota da prova 4: ");
    scanf("%f", &nota4);

    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    media_ponderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / 6.0;

    printf("\nMédia aritmética simples: %.2f", media_simples);
    printf("\nMédia ponderada: %.2f\n", media_ponderada);

    system("pause");

    return 0;
}