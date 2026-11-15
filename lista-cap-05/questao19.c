#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int n);

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
        printf("\nContagem regressiva:\n");
        contagem(n);

        printf("\nContagem crescente:\n");
        contagemCrescente(n);
        printf("Fogo!\n");
    }

    system("pause");
    return 0;
}

/* Versao 1: de n ate 1.
   Caso base: n == 0 (para a recursao e imprime "Fogo!").
   Passo recursivo: contagem(n - 1).
   O printf vem ANTES da chamada recursiva: o numero e impresso na ida,
   por isso a ordem fica decrescente (n, n-1, ..., 1). */
void contagem(int n)
{
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

/* Versao 2: de 1 ate n.
   O printf vem DEPOIS da chamada recursiva: a funcao desce ate o caso base
   (n == 0) e os numeros sao impressos na volta (desempilhamento),
   por isso a ordem fica crescente (1, 2, ..., n).
   O que muda e apenas a posicao da chamada recursiva em relacao ao printf. */
void contagemCrescente(int n)
{
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d\n", n);
}
