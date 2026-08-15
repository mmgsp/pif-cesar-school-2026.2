# ANÁLISE DO CÓDIGO DA QUESTÃO 09

## CÓDIGO DA QUESTÃO
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c", "\"");
    system("PAUSE");
    return 0;
}
```

Saída:
```

    "Primeiro programa|Pressione qualquer tecla para continuar. . .
```

## EXPLICAÇÃO

O compilador C interpreta os argumentos do tipo caractere simples como um valor do tipo int Quando um argumento desse tipo é passado para a função printf, por meio do especificador %c, o compilador recebe o valor inteiro correspondente ao caractere e o mostra na tela, por meio da tabela ASCII.

Um caractere simples é declarado por aspas simples (''), já uma string (que é um array de char) é declarada por aspas duplas (""). Quando uma string (tipo array) é passada como argumento para a função printf por meio do especificador %c, o compilador não consegue promover para tipo int, portanto demonstra comportamento indefinido, o que acontece no segundo printf do código.
