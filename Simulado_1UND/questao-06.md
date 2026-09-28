a) O compilador emitirá erro porque a variável soma foi declarada dentro do bloco do for. Seu escopo termina no } do laço, portanto ela não pode ser acessada pelo printf que está fora desse bloco.

b)
As iterações são:

i = 1, 2, 3, 4 → executadas normalmente.
i = 5 → continue pula o restante da iteração e vai para o próximo valor de i.
i = 6, 7 → executadas normalmente.
i = 8 → break encerra o laço imediatamente.
i = 9, 10 → não são executadas.

Portanto, são processados os valores 1, 2, 3, 4, 6 e 7.

c) 
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {

        if (i == 5) continue;
        if (i == 8) break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");

    return 0;
}
```