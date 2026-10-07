### A) Exatamente quantas iterações o laço acima executará antes de ser encerrado?

Resposta: O laço executará 5 iterações. Os valores de i e j se aproximam a cada passo (i aumenta 1 e j diminui 1), e quando i = 5 e j = 5 a condição i < j se torna falsa, encerrando o laço.

### B) Escreva a saída exata produzida pelo comando printf em cada uma das iterações executadas.

Resposta:

```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

A soma é sempre 10, pois o que i ganha, j perde.

### C) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

```c
int i = 0, j = 10;

while (i < j)
{
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

Resposta: A inicialização das variáveis foi feita antes do while, a condição i < j ficou no teste do laço, e os incrementos i++ e j-- foram colocados ao final do corpo, reproduzindo o comportamento do operador vírgula no cabeçalho do for.
