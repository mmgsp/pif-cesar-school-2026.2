#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2;
    float divisao;
    
   printf("Digite o primeiro número: ");
   scanf("%d", &n1);

   printf("\nDigite o segundo número: ");
   scanf("%d", &n2);

   printf("%d + %d = %d", n1, n2, n1+n2);
   printf("\n%d - %d = %d", n1, n2, n1-n2);
   printf("\n%d * %d = %d", n1, n2, n1*n2);

   divisao = (float)n1/(n2 + (n2==0));

    /***********************************************************************
    * A expressao (n2 == 0) vale 1 quando n2 é zero e 0 caso contrário.    *
    * Assim, n2 + (n2 == 0) nunca sera igual a zero.                       *
    ************************************************************************/

    printf("\n%d / %d = %.2f", n1, n2, divisao);
    printf("\n");

    system("pause");

    return 0;
} 
