#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int dias;
    float salario_bruto, imposto, salario_liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 30.0;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - imposto;

    printf("\nSalário bruto: R$ %.2f", salario_bruto);
    printf("\nSalário líquido: R$ %.2f\n", salario_liquido);

    system("pause");

    return 0;
}