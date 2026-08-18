#include <stdio.h>

int main()
{

    int intervalo_calc, intervalo_inicial, hora, minuto, segundo;

    printf("Digite um intervalo (em segundos): ");
    scanf("%d", &intervalo_inicial);

    intervalo_calc = intervalo_inicial;

    hora = intervalo_calc/3600;
    intervalo_calc = intervalo_calc - (hora*3600);

    minuto = intervalo_calc/60;
    segundo = intervalo_calc - (minuto*60);

    printf("\nO intervalo de %d segundos equivale a: %d horas, %d minutos, %d segundos.", intervalo_inicial, hora, minuto, segundo);

    return 0;

}

