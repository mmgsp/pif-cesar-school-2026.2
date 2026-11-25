#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define TAM 10

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float notas[TAM];
    float soma = 0, media, maior, menor;
    int i, acima = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / TAM;
    maior = notas[0];
    menor = notas[0];

    for (i = 0; i < TAM; i++)
    {
        if (notas[i] > maior)
        {
            maior = notas[i];
        }
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
        if (notas[i] > media)
        {
            acima++;
        }
    }

    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos acima da media: %d\n", acima);

    system("pause");
    return 0;
}
