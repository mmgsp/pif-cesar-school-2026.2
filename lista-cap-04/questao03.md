# Questão 03 — Operador Condicional Ternário vs. Estrutura if-else

### A) Explique o funcionamento da instrução ternária e informe o valor armazenado quando `media = 6.8`.

Resposta: A condição `media >= 7.0` é testada. Se for verdadeira, `situacao` recebe `'A'`; caso contrário, recebe `'R'`. Como `6.8` é menor que `7.0`, será armazenado `'R'`.

### B) Reescreva o trecho utilizando `if-else`.

Resposta:

```c
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

### C) O operador ternário pode substituir qualquer estrutura `if-else`?

Resposta: Não. O operador ternário é uma expressão que seleciona um entre dois valores ou expressões. Ele não substitui diretamente blocos `if-else` com vários comandos independentes; nesses casos, a estrutura tradicional é mais adequada.
