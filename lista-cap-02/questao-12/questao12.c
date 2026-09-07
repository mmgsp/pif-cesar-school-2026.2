#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, antecessor, sucessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    /*********************************************************************************
     * O operador prefixado foi utilizado nas atribuições porque a alteração         *
     * de "numero" precisa acontecer antes da atribuição:                            *
     *                                                                               *
     * --numero primeiro decrementa o valor e, em seguida, atribui o resultado       *
     * à variável "antecessor", garantindo que ela receba exatamente uma unidade     *
     * a menos que o número original.                                                *
     *                                                                               *
     * Depois, ++numero retorna "numero" ao valor original. Em seguida,              *
     * ++numero incrementa o valor antes da atribuição, fazendo com que              *
     * "sucessor" receba exatamente uma unidade a mais que o número original.        *
     *                                                                               *
     * Se fosse utilizado o operador pós-fixado (--numero e ++numero seriam          *
     * numero-- e numero++), o valor original seria atribuído primeiro às            *
     * variáveis, produzindo resultados incorretos para o antecessor e sucessor.     *
     *                                                                               *
     * Por fim, --numero retorna "numero" ao seu valor original para que os          *
     * três valores possam ser exibidos corretamente.                                *
     *********************************************************************************/

    antecessor = --numero;
    ++numero;
    sucessor  = ++numero;
    --numero;

    printf("\nNúmero: %d\nAntecessor: %d\nSucessor: %d\n", numero, antecessor, sucessor);

    system("pause");

    return 0;
}