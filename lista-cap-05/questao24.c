#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Para compilar COM depuracao, mantenha a linha abaixo ativa.
   Para compilar SEM depuracao, comente ou apague a linha. */
#define DEBUG

int somaAteN(int n);

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int n;

    printf("Digite um numero inteiro positivo: ");

    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida!\n");

    } else if (n <= 0) {
        printf("O numero deve ser positivo!\n");

    } else {
        printf("Soma de 1 ate %d: %d\n", n, somaAteN(n));
    }

    system("pause");
    return 0;
}

int somaAteN(int n)
{
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma += i;

#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

/* Diferenca de comportamento:
   - COM #define DEBUG: o pre-processador mantem o printf dentro do laco,
     e o programa mostra a soma parcial a cada iteracao antes do resultado.
   - SEM #define DEBUG: o pre-processador descarta o printf, e o programa
     mostra apenas o resultado final. O codigo de depuracao nem chega
     ao executavel. */
