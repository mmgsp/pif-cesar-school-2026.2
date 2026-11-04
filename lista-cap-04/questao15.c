#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int idade, tempo_servico;

    printf("Digite a idade e o tempo de servico (anos): ");
    if (scanf("%d %d", &idade, &tempo_servico) != 2 || idade < 0 || tempo_servico < 0) {
        printf("Dados invalidos!\n");
    } else if (idade >= 65 || tempo_servico >= 30 ||
               (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda nao pode se aposentar.\n");
    }

    system("pause");
    return 0;
}
