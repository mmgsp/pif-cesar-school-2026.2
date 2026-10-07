#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota, maior = 0.0, menor = 10.0, soma = 0.0;
    int total = 0;

    printf("Digite a nota do aluno (-1.0 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0)
    {
        if (nota >= 0.0 && nota <= 10.0)
        {
            total++;
            soma += nota;

            if (nota > maior)
            {
                maior = nota;
            }

            if (nota < menor)
            {
                menor = nota;
            }
        }
        else
        {
            printf("Nota inválida! Digite um valor entre 0.0 e 10.0.\n");
        }

        printf("Digite a nota do aluno (-1.0 para encerrar): ");
        scanf("%f", &nota);
    }

    if (total > 0)
    {
        printf("\nTotal de alunos avaliados: %d", total);
        printf("\nMaior nota da turma: %.2f", maior);
        printf("\nMenor nota da turma: %.2f", menor);
        printf("\nMédia geral da turma: %.2f\n", soma / total);
    }
    else
    {
        printf("\nNenhuma nota válida foi digitada.\n");
    }

    system("pause");

    return 0;
}
