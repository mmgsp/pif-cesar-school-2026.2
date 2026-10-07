### A) Qual é a sequência exata de valores impressos no console ao executar o Trecho A?

Resposta: A variável a começa com 36 e é dividida por 2 a cada iteração (divisão inteira), enquanto a > 0. A sequência impressa, separada por tabulação, é:

```
36	18	9	4	2	1
```

Após imprimir 1, a /= 2 resulta em 0 (1 / 2 = 0 em divisão inteira), a condição a > 0 se torna falsa e o laço termina.

### B) Explique o comportamento do Trecho B. O que faz a operação 'ch + 1' e por que os parênteses em '(ch = getch())' são estritamente necessários antes da comparação com 'X'?

Resposta: O Trecho B lê um caractere do teclado com getch() (sem exibir o que foi digitado e sem precisar de Enter), guarda em ch e repete o laço até que o caractere digitado seja 'X'. A cada caractere lido, imprime o caractere seguinte na tabela ASCII, pois a operação ch + 1 soma 1 ao código do caractere (por exemplo, digitar 'A' imprime 'B'). O 'X' que encerra o laço não é impresso.

Os parênteses são necessários por causa da precedência dos operadores: o operador != tem precedência maior que o operador de atribuição =. Sem os parênteses, a expressão seria interpretada como ch = (getch() != 'X'), e ch receberia apenas 0 ou 1 (o resultado da comparação) em vez do caractere digitado. Com os parênteses, a atribuição é feita primeiro, e só depois o valor de ch é comparado com 'X'. Vale lembrar também que getch() pertence à biblioteca conio.h, que não é padrão do C.

### C) Como o programa pode interromper a execução do laço infinito do Trecho C de forma programática sem forçar o encerramento do processo pelo sistema operacional?

Resposta: Pode-se usar uma condição dentro do corpo do laço junto com o comando break, que encerra o laço e devolve o controle para a instrução seguinte. Também seria possível usar return para sair da função ou exit() para finalizar o programa de forma controlada. Exemplo:

```c
int contador = 0;

for (;;)
{
    printf("Laço Infinito\n");
    contador++;

    if (contador == 5)
    {
        break;
    }
}
```
