#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int hora_normal, hora_extra;
    float salario_anual, imposto;

    printf("Digite, respectivamente, o total de horas normais e horas extras trabalhadas no ano (separados por espaço): ");
    scanf("%d %d", &hora_normal, &hora_extra);

    salario_anual = hora_normal*10 + hora_extra*15;

    imposto = (salario_anual>12000) ? (salario_anual-12000)*0.10 : 0;

    printf("\n- Salário anual: R$ %.2f\n- Imposto: R$ %.2f\n\n", salario_anual, imposto);
    
    system("pause");

    return 0;
}