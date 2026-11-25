#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ALUNOS 5
#define PROVAS 4

void lerNotas(float m[][PROVAS], int alunos);
float mediaAluno(float m[][PROVAS], int aluno);
float mediaProva(float m[][PROVAS], int alunos, int prova);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float notas[ALUNOS][PROVAS];
    int i, j;

    lerNotas(notas, ALUNOS);

    printf("\n--- Media de cada aluno ---\n");
    for (i = 0; i < ALUNOS; i++)
    {
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));
    }

    printf("\n--- Media de cada prova ---\n");
    for (j = 0; j < PROVAS; j++)
    {
        printf("Prova %d: %.2f\n", j + 1, mediaProva(notas, ALUNOS, j));
    }

    system("pause");
    return 0;
}

void lerNotas(float m[][PROVAS], int alunos)
{
    int i, j;

    for (i = 0; i < alunos; i++)
    {
        for (j = 0; j < PROVAS; j++)
        {
            printf("Aluno %d - nota da prova %d: ", i + 1, j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

float mediaAluno(float m[][PROVAS], int aluno)
{
    int j;
    float soma = 0;

    for (j = 0; j < PROVAS; j++)
    {
        soma += m[aluno][j];
    }
    return soma / PROVAS;
}

float mediaProva(float m[][PROVAS], int alunos, int prova)
{
    int i;
    float soma = 0;

    for (i = 0; i < alunos; i++)
    {
        soma += m[i][prova];
    }
    return soma / alunos;
}
