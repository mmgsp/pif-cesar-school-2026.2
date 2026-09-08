#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do cateto lado a: ");
    scanf("%f", &lado_a);

    printf("Digite o valor do cateto lado b: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("\nHipotenusa: %.2f\n", hipotenusa);

    system("pause");

    return 0;
}