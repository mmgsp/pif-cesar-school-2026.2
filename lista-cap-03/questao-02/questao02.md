### A) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?

Resposta: Porque a variável soma foi declarada dentro do bloco do laço for (entre as chaves). Em C, uma variável declarada dentro de um bloco só é visível dentro dele. Quando o laço termina, a variável deixa de existir, então no printf final o compilador não reconhece o identificador soma e emite um erro de variável não declarada.

### B) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o valor impresso para soma estaria conceitualmente incorreto a cada iteração?

Resposta: Porque a instrução int soma = 0; também está dentro do bloco, então a cada iteração a variável é criada novamente e reinicializada com zero. Com isso, o comando soma += i * i; nunca acumula o valor das iterações anteriores, e soma sempre terá apenas o quadrado do i atual (1, 4, 9, ..., 81), em vez da soma dos quadrados.

### C) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo de vida de variáveis na linguagem C.

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++)
    {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");

    return 0;
}
```

Resposta: Na correção, a variável soma foi declarada e inicializada fora do laço, no escopo da função main, e por isso continua visível após o fim do for e mantém o valor acumulado entre as iterações. O resultado impresso é 285.

O escopo de bloco define a região do código onde um identificador pode ser usado: uma variável declarada dentro de chaves { } só é visível dentro daquele bloco e dos blocos internos a ele. A visibilidade é justamente essa possibilidade de acessar o nome da variável em determinado ponto do programa. Já o tempo de vida é o período em que a variável existe na memória: uma variável local de bloco é criada quando a execução entra no bloco e destruída quando sai dele, e, se estiver dentro de um laço, é criada e destruída a cada iteração, perdendo o valor anterior.
