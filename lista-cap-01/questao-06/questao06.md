# ANÁLISE DO CÓDIGO DA QUESTÃO 05

## CÓDIGO DA QUESTÃO
```c
main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}
```
## ANÁLISE

1. Faltaram as seguintes diretivas para que o código funcione corretamente: #include <stdio.h>  e #include <stdlib.h>

2. Faltou declarar a função main corretamente: int main()

3. Na declaração das variáveis, o correto seria utilizar vírgulas, e no final ponto e vírgula: int a=1, b=2, c=3;

4. No printf, foram incluídos 3 identificadores e 4 variáveis, além de que a variável "d" não foi declarada. Faltou também fechar as aspas duplas após o \n.

5. Faltou declarar também o retorno da função main: return 0;
