#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float salario_base, salario_liquido;

    printf("Digite o salário base: R$ ");
    scanf("%f", &salario_base);

    // A gratificação corresponde a 5% do salário-base,
    // enquanto o imposto corresponde a 7% do mesmo valor.
    // Portanto, o salário líquido é obtido somando 5% e
    // subtraindo 7% do salário-base, resultando em 98% dele.
    salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);

    printf("Salário líquido a receber: R$ %.2f\n", salario_liquido);

    system("pause");

    return 0;
}