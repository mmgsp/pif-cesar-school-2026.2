#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int angulo1, angulo2, angulo3;

    printf("Digite os tres angulos internos: ");
    if (scanf("%d %d %d", &angulo1, &angulo2, &angulo3) != 3) {
        printf("Entrada invalida!\n");
    } else if (angulo1 <= 0 || angulo2 <= 0 || angulo3 <= 0 ||
               angulo1 + angulo2 + angulo3 != 180) {
        printf("Os angulos nao formam um triangulo valido.\n");
    } else if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
        printf("Triangulo retangulo.\n");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
        printf("Triangulo obtusangulo.\n");
    } else {
        printf("Triangulo acutangulo.\n");
    }

    system("pause");
    return 0;
}
