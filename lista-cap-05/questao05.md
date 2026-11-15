# Questão 05 — Diretiva `#define`, Constantes e Macros com Argumentos

### A) Qual será a saída de cada `printf`? Explique por que `SQR` e `DOBRO` se comportam de maneira diferente, relacionando o resultado ao uso de parênteses de proteção.

Resposta: A saída será:

```
25
8
```

`SQR(2+3)` é expandida para `((2+3)*(2+3))`, que resulta em `5 * 5 = 25`, pois os parênteses protegem o argumento. Já `DOBRO(2+3)` é expandida para `2+3*2`, pois não há parênteses; como a multiplicação tem precedência sobre a soma, o resultado é `2 + 6 = 8`, e não `10`. O pré-processador faz substituição textual, sem calcular o argumento antes. (Observação: o código também precisa de `#include <stdio.h>` para usar `printf`.)

### B) Por que a diretiva `#define` não termina com ponto e vírgula? Por que, por convenção, usamos identificadores em maiúsculas?

Resposta: A diretiva `#define` é um comando do pré-processador, não da linguagem C, e vai até o fim da linha. Se houvesse ponto e vírgula, ele faria parte do texto de substituição e seria inserido em todos os lugares onde o identificador fosse usado, podendo causar erros de sintaxe (por exemplo, em `area = PI * r;` com `PI` definido como `3.14;`). Por convenção usamos maiúsculas para distinguir constantes e macros das variáveis e funções, facilitando a leitura do código.

### C) Explique por que `#define PRN (n) printf("%d", n)` está incorreto e qual é a forma correta. Aponte também uma diferença entre uma macro com argumentos e uma função comum.

Resposta: Com o espaço entre `PRN` e `(n)`, o pré-processador interpreta `PRN` como uma macro **sem argumentos**, cujo texto de substituição é `(n) printf("%d", n)`. A forma correta é, sem espaço:

```c
#define PRN(n) printf("%d", n)
```

Uma diferença é que a macro é resolvida no pré-processamento por substituição de texto, sem verificação de tipos e sem chamada em tempo de execução, enquanto a função comum é compilada, tem tipo definido para parâmetros e retorno e é chamada em tempo de execução, usando a pilha.
