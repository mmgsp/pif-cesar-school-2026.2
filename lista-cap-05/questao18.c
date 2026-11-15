#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long potencia(int base, int expoente);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int base, expoente;

    printf("Digite a base: ");
    if (scanf("%d", &base) != 1) {
        printf("Entrada invalida!\n");

    } else {
        printf("Digite o expoente (inteiro nao negativo): ");

        if (scanf("%d", &expoente) != 1) {
            printf("Entrada invalida!\n");

        } else if (expoente < 0) {
            printf("O expoente nao pode ser negativo!\n");

        } else {
            printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
        }
    }

    system("pause");
    return 0;
}

long potencia(int base, int expoente)
{
    /* Caso base: qualquer numero elevado a 0 e igual a 1 */
    if (expoente == 0) {
        return 1;
    }

    /* Passo recursivo: base^expoente = base * base^(expoente - 1) */
    return (long)base * potencia(base, expoente - 1);
}
