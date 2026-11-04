# Questão 04 — Seleção Múltipla com switch-case e Efeito Fall-Through

### A) Qual será a saída exata? Por que ocorre mais de uma impressão?

Resposta: A saída será:

```text
Prata
Ouro
```

A execução começa no `case 2` e continua no `case 3`, pois não há um `break` entre eles. Esse comportamento é chamado de *fall-through*.

### B) Qual é o papel do `break` e como se chama o fenômeno que ocorre quando ele é omitido?

Resposta: O `break` encerra a execução do `switch`. Quando ele é omitido, a execução continua nos próximos `case`, fenômeno chamado *fall-through*.

### C) Quais tipos podem ser utilizados na expressão do `switch`? `float` ou `double` são permitidos?

Resposta: A expressão deve possuir tipo inteiro, como `char`, `int` ou `long`, ou tipo de enumeração. `float` e `double` não são permitidos porque não são tipos inteiros.
