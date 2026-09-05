### A) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos (Linux, macOS, servidores)?

Resposta: A biblioteca <conio.h> deve ser evitada em sistemas modernos porque não faz parte do padrão ANSI C. Ela surgiu em implementações específicas, principalmente em ambientes DOS/Windows, e o funcionamento pleno de suas funções varia dependendo do compilador e do sistema operacional. 

### B) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h> para entrada e saída de caracteres?

Resposta: As funções padronizadas de <stdio.h> para caracteres são principalmente getchar() para entrada e putchar() para saída. Pode-se utilizar também scanf() para entrada e printf() para saída de caracteres, utilizando o especificador %c.

### C) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira  robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

```c
#include <stdio.h>

int main()
{
    int caractere;

    printf("Digite um caractere: ");

    do
    {
        caractere = getchar();
    } while (caractere == '\n');

    printf("Caractere digitado: %c\n", caractere);

    return 0;
}
```