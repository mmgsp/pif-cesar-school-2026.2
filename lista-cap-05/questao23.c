#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define DOBRO(x) x*2

int dobro(int x);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf("=== Macro sem parenteses ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));

    /* Os resultados diferem porque a macro faz substituicao de texto:
       DOBRO(2+3) vira 2+3*2, e a multiplicacao tem precedencia sobre a
       soma, resultando em 2 + 6 = 8. Ja a funcao recebe o argumento
       ja calculado (5) e retorna 5 * 2 = 10. */

    /* Correcao: remove a definicao antiga e define de novo com parenteses */
    #undef DOBRO
    #define DOBRO(x) ((x) * 2)

    printf("\n=== Macro corrigida ===\n");
    printf("DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("dobro(2+3) = %d\n", dobro(2+3));

    /* Agora DOBRO(2+3) vira ((2+3) * 2) = 10, igual ao da funcao. */

    system("pause");
    return 0;
}

int dobro(int x)
{
    return x * 2;
}
