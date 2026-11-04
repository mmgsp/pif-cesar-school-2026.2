# Questão 02 — Associação do Comando else e Aninhamento de Decisões

### A) Qual mensagem será impressa? Por que a Opção B é ou não exibida?

Resposta: Será impressa `Opção B`. Como `x > 10` é verdadeiro, o segundo `if` é avaliado. Como `y > 10` é falso, o `else` associado a esse `if` é executado.

### B) Qual é a regra oficial da Linguagem C para associar uma cláusula `else`?

Resposta: O `else` é associado ao `if` mais próximo que ainda não tenha um `else` correspondente.

### C) Reescreva o código utilizando chaves para que a Opção B seja impressa apenas quando `x <= 10`.

Resposta:

```c
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```
