#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int horas_inicio, minutos_inicio, segundos_inicio, segundos, duracao, horas_termino, minutos_termino, segundos_termino;

    printf("Digite o horário de inicio do experimento: ");

    printf("\nHoras: ");
    scanf("%d", &horas_inicio);

    printf("Minutos: ");
    scanf("%d", &minutos_inicio);

    printf("Segundos: ");
    scanf("%d", &segundos_inicio);

    printf("\n\nDigite a duração do experimento (em segundos): ");
    scanf("%d", &duracao);

    segundos = horas_inicio*3600 + minutos_inicio*60 + segundos_inicio + duracao;

    horas_termino = segundos/3600;
    segundos %= 3600;

    minutos_termino = segundos/60;

    segundos_termino = segundos%60;

    printf("\nHorário de início: %02d:%02d:%02d\nDuração do experimento (em segundos): %d\nHorário de término: %02d:%02d:%02d\n\n", horas_inicio, minutos_inicio, segundos_inicio, duracao, horas_termino, minutos_termino, segundos_termino);

    system("pause");

    return 0;
}