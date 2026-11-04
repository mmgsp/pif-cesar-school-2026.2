# Questão 01 — Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

### A) Qual é o efeito prático de escrever `if (x = 0)` em vez de `if (x == 0)`?

Resposta: `x = 0` atribui o valor zero à variável `x`. Como o resultado da atribuição também é zero, a condição é falsa e o bloco do `if` não é executado. Já `x == 0` apenas compara o valor de `x` com zero.

### B) Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando `if`?

Resposta: O valor zero é interpretado como falso. Qualquer valor diferente de zero é interpretado como verdadeiro, seja ele inteiro ou real.

### C) Analise a instrução `if (x = -5)` e determine se o bloco será executado.

Resposta: Sim. A variável `x` recebe `-5` e o resultado da atribuição é diferente de zero. Portanto, a condição é verdadeira e o bloco é executado.
