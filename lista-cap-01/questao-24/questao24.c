#include <stdio.h>

int main()
{

    char aluno1[] = "ALINE";
    char aluno2[] = "MARIO";
    char aluno3[] = "SERGIO";
    char aluno4[] = "SHIRLEY";

    float nota1 = 9;
    char nota2[] = "DEZ";
    float nota3 = 4.5;
    float nota4 = 7;

    printf("%-12s%s", "ALUNO(A)", "NOTA");
    printf("\n==========  =====");
    printf("\n%-12s%.1f", aluno1, nota1);
    printf("\n%-12s%s", aluno2, nota2);
    printf("\n%-12s%.1f", aluno3, nota3);
    printf("\n%-12s%.1f", aluno4, nota4);

    return 0;

}

