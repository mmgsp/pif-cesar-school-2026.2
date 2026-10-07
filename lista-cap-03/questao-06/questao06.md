### A) Qual é o valor final da variável x que será impresso pela instrução printf?

Resposta: O valor impresso será 6.

### B) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem durante a execução do teste 'x++ < 5'.

Resposta: Com o incremento pós-fixado, o valor atual de x é usado na comparação primeiro e só depois x é incrementado. Isso acontece mesmo quando o teste resulta em falso. Os passos são:

```
Teste 1: compara 0 < 5 (verdadeiro) e depois x passa a valer 1
Teste 2: compara 1 < 5 (verdadeiro) e depois x passa a valer 2
Teste 3: compara 2 < 5 (verdadeiro) e depois x passa a valer 3
Teste 4: compara 3 < 5 (verdadeiro) e depois x passa a valer 4
Teste 5: compara 4 < 5 (verdadeiro) e depois x passa a valer 5
Teste 6: compara 5 < 5 (falso) e depois x passa a valer 6
```

No sexto teste a condição é falsa e o laço termina, mas o incremento ainda é aplicado, por isso x termina com 6 e não com 5. Como o corpo do laço é vazio (apenas o ponto-e-vírgula), todo o trabalho é feito dentro da própria condição.

### C) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o mesmo resultado final de x.

```c
int x = 0;

while (x < 5)
{
    x++;
}

x++; // incremento do último teste, que resultou em falso

printf("Valor final de x = %d\n", x);
```

Resposta: O laço incrementa x enquanto ele for menor que 5, chegando a 5. O x++ extra, depois do laço, reproduz o incremento que o teste x++ < 5 faz mesmo quando a comparação falha, mantendo o valor final igual a 6.
