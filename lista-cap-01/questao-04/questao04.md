# ANÁLISE DO CÓDIGO DA QUESTÃO 04

## CÓDIGO DA QUESTÃO
```c
#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)
```
## ANÁLISE
```c
#include <stdio.h>
#include <stdlib.h>; /* <-- Aqui não é necessário utilizar ";" */

int Main{} /* <-- A sintaxe correta seria "int main()", utilizando parênteses "()" no lugar das chaves "{}" e o main em minúsculas */

( /* <-- A sintaxe correta seria "{" */

    printf( Existem %d semanas no ano.,52); /* <-- O texto dentro da função printf deveria estar entre aspas duplas */

    cout << endl; /* <-- Esta linha de código não funciona em C, pois utiliza funções exclusivas de C++ */

    system("PAUSE"); 
    return 0;

) /* <-- A sintaxe correta seria "}" */
```