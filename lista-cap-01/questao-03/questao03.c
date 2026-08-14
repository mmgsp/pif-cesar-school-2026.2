/* Esse programa mostra o uso de comentários em várias linhas
   e mostra também o uso de comentários em uma única linha */

// questao03.c

#include <stdio.h> // Libera a utilização das funções padrão de entrada e saída de dados

int main() // Declarando a função main
{ // Início do corpo da função main

    int a, b, c; // Declarando três variáveis do tipo inteiro: "a", "b" e "c"

    a = 1; // Atribuindo o valor numérico 1 à variável "a"
    b = 2; // Atribuindo o valor numérico 2 à variável "b"

    c = a + b; // Atribuindo o resultado da soma de "a" e "b" à variável "c"

    printf("O resultado da soma entre %d e %d eh: %d", a, b, c); /* Mostra na tela o resultado da soma de
                                                                    "a" e "b", atribuída à variável "c" */
    return 0;

} // Fim do corpo da função main
