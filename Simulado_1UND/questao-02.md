# CÓDIGO

```c
#include <stdio.h>
#include <stdlib.h>;

int Main()
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade);
cout << endl;
system("PAUSE");
return 0;
}

```

# ERROS IDENTIFICADOS

- `#include <stdlib.h>;`: Não é necessário utilizar ponto e vírgula `;` ao incluir arquivos de cabeçalho em C.
- `int Main()`: Por padrão, em C o nome da função de entrada do código deve ser "main" com todos os caracteres minúsculos.
- `printf( A idade do aluno eh: %d anos.. , idade);`: A frase descrita dentro do printf deveria estar entre aspas.
- `cout << endl;`: Comando de C++, não reconhecido pelo compilador C.