#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9.0) / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("\nTemperatura em Fahrenheit: %.2f °F", fahrenheit);
    printf("\nTemperatura em Kelvin: %.2f K", kelvin);
    printf("\n");

    system("pause");

    return 0;
}
