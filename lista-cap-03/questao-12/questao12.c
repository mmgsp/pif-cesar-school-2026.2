#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    float celsius, fahrenheit, kelvin;

    printf("%7s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("-------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5)
    {
        fahrenheit = (9 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;

        printf("%7.2f %12.2f %10.2f\n", celsius, fahrenheit, kelvin);
    }

    system("pause");

    return 0;
}
