#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    const float PI = 3.141593;
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("\nÁrea da superfície da esfera: %.2f", area);
    printf("\nVolume da esfera: %.2f\n", volume);

    system("pause");

    return 0;
}