#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    media = mediaPonderada(nota1, nota2, nota3);

    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);

    system("pause");
    return 0;
}

float mediaPonderada(float n1, float n2, float n3)
{
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media)
{
    if (media >= 5.0f) {
        printf("Situacao: Aprovado\n");

    } else if (media >= 3.0f) {
        printf("Situacao: Em Recuperação\n");

    } else {
        printf("Situacao: Reprovado\n");
    }
}
