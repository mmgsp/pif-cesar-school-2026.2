## CÓDIGO DA QUESTÃO
```c
// Trecho A
    int n = 5;
    int x = ++n;
    printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
    int m = 5;
    int y = m++;
    printf("Trecho B: m = %d, y = %d\n", m, y);
```

### A) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?

Resposta: O operador prefixado `(++n)` incrementa o valor da variável antes de qualquer outra operação, enquanto o pós-fixado `(m++)` incremente o valor da variável após a operação à qual a variável será submetida. Portanto, os valores impressos na tela serão:

- Trecho A

```
Trecho A: n = 6, x = 6
```

- Trecho B

```
Trecho B: m = 6, y = 5
```

### B) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do compilador adotado (comportamento indefinido).

Resposta: A instrução printf("%d\t%d\t%d\n", n, n+1, n++); gera resultado imprevisível por dois motivos combinados:

A ordem de avaliação dos argumentos de uma função não é definida pelo padrão C — o compilador pode avaliar n, n+1 e n++ em qualquer ordem.
A variável n é lida e modificada dentro da mesma expressão sem um ponto de sequência entre essas ações — n++ modifica n, enquanto n e n+1 apenas o leem, e a vírgula entre argumentos não garante uma ordem sequenciada entre essas operações.

Como consequência, isso resulta em comportamento indefinido: compiladores diferentes (ou até o mesmo compilador com otimizações diferentes) podem produzir saídas distintas, como 5 6 5, 6 7 5 ou 6 7 6, sem que nenhuma delas esteja "errada" segundo o padrão da linguagem.
