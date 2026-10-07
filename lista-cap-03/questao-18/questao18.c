#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int numero, original, digito;
    long long int invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    original = numero;

    while (numero > 0)
    {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    printf("Número original: %d\n", original);
    printf("Número invertido: %lld\n", invertido);

    system("pause");

    return 0;
}
