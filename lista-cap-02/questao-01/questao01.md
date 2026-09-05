## CÓDIGO DA QUESTÃO

```C
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %d\n", valor_inteiro);
    system("PAUSE");
    return 0;
}
```

### A) Qual é o valor numérico que será efetivamente exibido no console ao executar esse programa?

Resposta: Será exibido 2.

### B) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?

Resposta: Isso ocorre porque 2.97 é um valor de ponto flutuante (float) e está sendo atribuído a uma variável do tipo inteiro (int). Como int não armazena a parte decimal, ela é descartada. Esse processo é uma conversão implícita de tipos, com truncamento da parte fracionária.

### C) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo programador caso ele necessite arredondar o valor ou manter a precisão?

Resposta: Para manter a precisão, deve-se utilizar float ou double. Caso seja necessário converter para inteiro, o programador pode fazer a conversão explicitamente com cast ou utilizar funções como round(), da biblioteca math, para realizar o arredondamento desejado.
