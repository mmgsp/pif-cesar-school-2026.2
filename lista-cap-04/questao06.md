# Questão 06 — Construções else-if e Análise Lógica de Intervalos

### A) Qual será a saída para `idade = 65`? Por que múltiplas mensagens são exibidas?

Resposta: Serão exibidas as mensagens `Idoso`, `Adulto` e `Jovem`. Os três comandos `if` são independentes, então todas as condições verdadeiras são executadas. O `else` pertence somente ao último `if`.

### B) Qual é a diferença entre `if` independentes e uma cadeia `else-if`?

Resposta: Nos `if` independentes, todas as condições são verificadas e mais de um bloco pode ser executado. Na cadeia `else-if`, apenas o primeiro bloco cuja condição seja verdadeira é executado; os demais são ignorados.

### C) Reescreva o programa utilizando `else-if`.

Resposta:

```c
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
