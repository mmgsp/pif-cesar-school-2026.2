#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float comprimento, largura, preco_arame, qtde_arame, custo_cercamento;

    printf("Digite, respectivamente, o comprimento e a largura do terreno (separados por espaço): ");
    scanf("%f %f", &comprimento, &largura);

    printf("\nDigite o preço unitário do arame: R$ ");
    scanf("%f", &preco_arame);

    qtde_arame = (comprimento + largura)*6;
    custo_cercamento = qtde_arame * preco_arame;

    printf("\n- Quantidade mínima de arame necessária: %.2f metros\n- Custo total do cercamento: R$ %.2f\n\n", qtde_arame, custo_cercamento);
    
    system("pause");

    return 0;
}