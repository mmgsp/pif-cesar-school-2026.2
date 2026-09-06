#include <stdio.h>
#include <stdlib.h>


int main()
{
    int dia, mes, ano;
    
    printf("Digite uma data no formato (dd/mm/aaaa): ");
    scanf("%2d/%2d/%4d", &dia, &mes, &ano);

    printf("\n%04d/%02d/%02d",ano, mes, dia);
    printf("\n");

    system("pause");

    return 0;
} 
