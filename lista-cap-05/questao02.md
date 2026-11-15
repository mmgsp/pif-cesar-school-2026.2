# Questão 02 — O Comando `return` e suas Limitações

### A) Quantos valores uma função em C pode devolver por meio do comando `return`? O que o programador pretendia fazer na função `calcular()` e por que a abordagem não cumpre esse objetivo?

Resposta: Uma função em C pode devolver apenas um valor por meio do `return`. O programador pretendia devolver dois resultados, a soma e a média, com `return soma, media;`. Porém, nessa instrução a vírgula funciona como operador: ela avalia `soma`, descarta o resultado e devolve somente `media`. Assim, a soma é perdida e apenas um valor é retornado.

### B) Qual é o efeito do comando `return;` dentro da função `void imprime_mensagem()`? Ele é obrigatório no final de uma função `void`? Justifique.

Resposta: O `return;` encerra imediatamente a execução da função e devolve o controle ao ponto onde ela foi chamada, sem devolver valor algum. No caso, se `erro < 0`, a mensagem de erro é impressa e a função termina sem executar o `printf` seguinte. Ele não é obrigatório no final de uma função `void`, porque ao chegar na chave de fechamento a função retorna automaticamente. Seu uso é útil para sair antes do fim.

### C) Reescreva a função `calcular()` para que ela retorne apenas a média dos três valores. Em seguida, crie uma segunda função, separada, que retorne apenas a soma. Explique por que, em C, precisamos de duas funções para devolver dois resultados diferentes quando usamos apenas o comando `return`.

Resposta:

```c
float calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
```

Como o `return` devolve um único valor por vez, cada resultado precisa de sua própria função. Cada função tem um único tipo de retorno e um único valor devolvido por chamada. Observação: na versão original com `int`, a divisão `soma / 3` seria inteira e descartaria a parte decimal; por isso a média foi escrita com `float` e dividida por `3.0f`.
