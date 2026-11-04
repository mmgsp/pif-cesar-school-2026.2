#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float salario, aumento, novo_salario;
    int cargo;

    printf("Salario atual: R$ ");
    if (scanf("%f", &salario) != 1 || salario < 0) {
        printf("Salario invalido!\n");
    } else {
        printf("Cargo (1 = Tecnico; 2 = Gerente; 3 = Demais cargos): ");
        if (scanf("%d", &cargo) != 1) {
            printf("Cargo invalido!\n");
        } else {
            switch (cargo) {
                case 1:
                    aumento = (salario <= 3000.0f) ? salario * 0.15f : salario * 0.10f;
                    break;
                case 2:
                    aumento = (salario <= 5000.0f) ? salario * 0.10f : salario * 0.05f;
                    break;
                case 3:
                    aumento = salario * 0.08f;
                    break;
                default:
                    printf("Codigo de cargo invalido!\n");
                    return 0;
            }
            novo_salario = salario + aumento;
            printf("Aumento: R$ %.2f\n", aumento);
            printf("Novo salario: R$ %.2f\n", novo_salario);
        }
    }

    system("pause");
    return 0;
}
