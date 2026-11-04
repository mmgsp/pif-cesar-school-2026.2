#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float numero, resultado;

    printf("Digite um numero real: ");

    if (scanf("%f", &numero) != 1) {
        printf("Entrada invalida!\n");

    } else if (numero >= 0.0f) {
        resultado = sqrtf(numero);
        printf("Raiz quadrada: %.2f\n", resultado);
        
    } else {
        resultado = numero * numero;
        printf("Quadrado: %.2f\n", resultado);
    }

    system("pause");
    return 0;
}
