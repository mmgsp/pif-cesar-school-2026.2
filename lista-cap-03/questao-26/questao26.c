#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a, b, num, divisor, primo;
    int soma = 0;
    int encontrou = 0;

    do
    {
        printf("Digite o valor de A (inteiro positivo): ");
        scanf("%d", &a);

        printf("Digite o valor de B (inteiro positivo, maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b)
        {
            printf("Erro: A e B devem ser positivos e A deve ser menor que B.\n\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("\nPrimos no intervalo [%d, %d]:\n", a, b);

    for (num = a; num <= b; num++)
    {
        if (num >= 2)
        {
            primo = 1;

            for (divisor = 2; divisor * divisor <= num; divisor++)
            {
                if (num % divisor == 0)
                {
                    primo = 0;
                    break;
                }
            }

            if (primo)
            {
                printf("%d ", num);
                soma += num;
                encontrou = 1;
            }
        }
    }

    if (encontrou)
    {
        printf("\n\nSoma dos primos encontrados: %d\n", soma);
    }
    else
    {
        printf("Nenhum número primo foi encontrado no intervalo.\n");
    }

    system("pause");

    return 0;
}
