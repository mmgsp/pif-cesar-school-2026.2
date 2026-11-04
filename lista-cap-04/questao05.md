# Questão 05 — Avaliação de Curto-Circuito em Operadores Lógicos

### A) Qual será a saída exata? O incremento `++b` será executado?

Resposta: `a != 0` é falso, então o segundo operando do `&&` não é avaliado. Assim, `++b` não é executado, o `else` reduz `c` em 2 e a saída será:

```text
a = 0, b = 5, c = 8
```

### B) Explique a avaliação de curto-circuito para `&&` e `||`.

Resposta: Em `&&`, se o primeiro operando for falso, o segundo não é avaliado. Em `||`, se o primeiro operando for verdadeiro, o segundo não é avaliado, pois o resultado da expressão já está definido.

### C) Quais seriam os valores finais de `b` e `c` com `if (a == 0 || ++b > 5)`?

Resposta: Como `a == 0` é verdadeiro, o segundo operando não é avaliado e `b` permanece 5. O bloco do `if` é executado e `c` passa de 10 para 20. Portanto, `b = 5` e `c = 20`.
