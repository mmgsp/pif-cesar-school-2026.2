# Lista - Capítulo 01

## Questão 01

```c
#include <stdio.h>

int main(){

    int nascimento = 2003;
    printf("Eu nasci no ano %d", nascimento);

    return 0;
}
```

## Questão 02

```c
#include <stdio.h>

int main(){

    float pi = 3.14159265359;

    printf("Pi = %.3f", pi);

    return 0;
}
```

## Questão 03

```c
/* Esse programa mostra o uso de comentários em várias linhas
   e mostra também o uso de comentários em uma única linha */

/* questao03.c */

#include <stdio.h> /* Libera a utilização das funções padrão de entrada e saída de dados */

int main() /* Declarando a função main */
{ /* Início do corpo da função main */

    int a, b, c; /* Declarando três variáveis do tipo inteiro: "a", "b" e "c" */

    a = 1; /* Atribuindo o valor numérico 1 à variável "a" */
    b = 2; /* Atribuindo o valor numérico 2 à variável "b" */

    c = a + b; /* Atribuindo o resultado da soma de "a" e "b" à variável "c" */

    printf("O resultado da soma entre %d e %d eh: %d", a, b, c); /* Mostra na tela o resultado da soma de
                                                                    "a" e "b", atribuída à variável "c" */
    return 0;

} /* Fim do corpo da função main */
```

## Questão 04

### CÓDIGO DA QUESTÃO
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
### ANÁLISE
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

### Código corrigido

```c
/* Código da questão 04 corrigido */

#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("Existem %d semanas no ano.",52);
printf("\n");

system("PAUSE");

return 0;

}
```

## Questão 05

### CÓDIGO DA QUESTÃO
```c
main()
{
printf("Linguagem C");
system("pause");
}
```
### ANÁLISE

1. Faltaram as seguintes diretivas para que o código funcione corretamente: #include <stdio.h>  e #include <stdlib.h>

2. Faltou declarar a função main corretamente: int main() 

3. Faltou declarar também o retorno da função main: return 0;

4. A nível de organização, seria preferível adicionar uma quebra de linha (\n) ao final da string dentro do printf (Opcional pois não afeta a compilação e execução do código)

### Código corrigido

```c
/* Código da questão 05 corrigido */

#include <stdio.h>
#include <stdlib.h>

int main() 
{

    printf("Linguagem C\n");
    system("pause");   

    return 0;

}
```

## Questão 06

### CÓDIGO DA QUESTÃO
```c
main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}
```
### ANÁLISE

1. Faltaram as seguintes diretivas para que o código funcione corretamente: #include <stdio.h>  e #include <stdlib.h>

2. Faltou declarar a função main corretamente: int main()

3. Na declaração das variáveis, o correto seria utilizar vírgulas, e no final ponto e vírgula: int a=1, b=2, c=3;

4. No printf, foram incluídos 3 identificadores e 4 variáveis, além de que a variável "d" não foi declarada. Faltou também fechar as aspas duplas após o \n.

5. Faltou declarar também o retorno da função main: return 0;

### Código corrigido

```c
/* Código da questão 06 corrigido */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, b=2, c=3;
    printf("0s números são: %d%d%d\n", a, b, c);
    system("pause");

    return 0;
}
```

## Questão 07

a) printf("\n\tBom dia! Shirley.");

Saída:
```

    Bom dia! Shirley.
=== Code execution successfull ===
```

b) printf("Você já tomou café? \n");

Saída:
```
Você já tomou café? 

=== Code execution successfull ===
```

c) printf("\n\nA solução não existe!\nNão insista.");

Saída:
```


A solução não existe!
Não insista.
=== Code execution successfull ===
```

d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");

Saída:
```
Duas    linhas  de  saída
ou  uma?
=== Code execution successfull ===
```

e) printf("%s\n%s\n%s\n", "um", "dois", "três");

Saída:
```
um
dois
três

=== Code execution successfull ===
```

## Questão 08

### CÓDIGO DA QUESTÃO
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\t\"Primeiro programa\"");
    system("PAUSE");
    return 0;
}
```

Saída:
```

    "Primeiro programa"Pressione qualquer tecla para continuar. . .
```

### EXPLICAÇÃO

1. **Fluxo de Execução**:
```
Código .c
     ↓
Pré-processador
     ↓
Código pré-processado
     ↓
Compilador
     ↓
Código objeto
     ↓
Linker
     ↓
Executável
     ↓
Execução no console
```

Em C, o código escrito passa por um pré-processamento, validando a implementação das funções e diretivas antes até mesmo do código ser compilado. Ao passar pelas validações, o código é "traduzido" pelo compilador para instruções de máquina, nessa parte do processo o linker conecta as chamadas das funções e variáveis utilizadas no código-fonte aos respectivos endereços de memória para criar um único arquivo executável que o sistema operacional consegue rodar.

2. **Diretivas**: Em C, as diretivas (indicadas por #) são comandos lidos pelo pré-processador que orientam como o código-fonte deve ser modificado antes de ser compilado para execução.

No código descrito na questão foram utilizadas diretivas #include para que seja possível adicionar as funcionalidades necessárias para o funcionamento das funções utilizadas.

3. **Headers**: Em C, headers são arquivos com a extensão .h que são "importáveis" e que contém protótipos de funções, macros e/ou declarações de tipos. Na prática o header é responsável por validar a utilização das funções no código antes dele ser compilado e executado, impedindo que o mesmo seja compilado com erros.

No código descrito na questão foram utilizados os headers <stdio.h> e <stdlib.h>, que permitem a utilização da função printf e system, respectivamente.

4. **Função main e return**: Em C, a função main é o ponto de entrada do programa, o compilador e o sistema operacional procurar uma função chamada "main" (com todas as letras minúsculas) para iniciar a execução do código. A declaração do tipo da função (int) indica o tipo de retorno da função ao fim da execução do código (número inteiro), sendo possível definir códigos de saída para identificar o comportamento do sistema após a execução. É utilizada a palavra reservada return para declarar o retorno de uma função em C.

5. **Sequência de escapes**: Na linguagem C, uma sequência de escape é utilizada para representar caracteres especiais ou modelar um texto (string). Utiliza-se a barra invertida (\) seguida de uma letra, número, ou caractere (alguns pré-determinados) para indicar uma sequência de escape.

No código descrito na questão, nós temos as seguintes sequências de escapes dentro do printf:

- \n: Adiciona uma quebra de linha (pula para a linha de baixo)
- \t: Adiciona uma tabulação horizontal ao texto (mesma função da tecla "Tab")
- \": Em C, as aspas duplas são utilizadas para determinar o início e fim de uma string, para incluir esses caracteres ao texto sem dar conflito com as regras da linguagem, utiliza-se a sequência de escape \"
- "\: Utiliza-se essa sequência após \" para indicar ao compilador onde as aspas duplas do texto finalizam como caracteres da string.

6. **Funções printf e system**:

- A função printf é responsável por exibir dados formatados na tela de saída padrão do sistema operacional (console), recebe como parâmetro uma string (delimitada por aspas duplas), podendo ter ou não sequências de escape para formatação do texto ou indicadores para mostrar dados de variáveis na string.

- A função system é permite que o código em C execute funções do sistema operacional diretamente pelo terminal, recebe como parâmetro uma string contendo o comando de terminal a ser executado. No código descrito na questão, o comando pause é utilizado, onde o sistema aguarda o usuário pressionar qualquer tecla para prosseguir.

## Questão 09

### CÓDIGO DA QUESTÃO
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

### EXPLICAÇÃO

O compilador C interpreta os argumentos do tipo caractere simples como um valor do tipo int Quando um argumento desse tipo é passado para a função printf, por meio do especificador %c, o compilador recebe o valor inteiro correspondente ao caractere e o mostra na tela, por meio da tabela ASCII.

Um caractere simples é declarado por aspas simples (''), já uma string (que é um array de char) é declarada por aspas duplas (""). Quando uma string (tipo array) é passada como argumento para a função printf por meio do especificador %c, o compilador não consegue promover para tipo int, portanto demonstra comportamento indefinido, o que acontece no segundo printf do código.

## Questão 10

- Alternativa correta: b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).

- Justificativa: O compilador C interpreta os caracteres por meio da tabela ASCII, que atribui um valor inteiro diferente para cada caractere, por isso C é case sensitive. Os identificadores "peso", "Peso" e "PESO" são diferentes em C, pois os valores atríbuidos aos caracteres maiúsculos e minúsculos são diferentes, o caractere 'p' tem valor 112 na tabela ASCII, enquanto o caractere 'P' tem valor 80, por exemplo.

## Questão 11

```
Constante      Classificação (Tipo de Constante)            Tipo Base em C
\r                  [ Sequência de Escape ]                    [ char ]
2130        [ Constante inteira decimal (positiva) ]           [ int ]
-123        [ Constante inteira decimal (negativa) ]           [ int ]
33.28      [ Constante de ponto flutuante (positiva) ]         [ float ]
0XFA            [ Constante inteira hexadecimal ]              [ int ]
0101               [ Constante inteira octal ]                 [ int ]
2.0e30          [ Constante de ponto flutuante ]               [ double ]
\xDC          [ Sequência de escape hexadecimal ]              [ char ]
'\"'                [ Sequência de Escape ]                    [ char ]
'\\'                [ Sequência de Escape ]                    [ char ]
'F'                [ Constante de caractere ]                  [ char ]
0                 [ Constante inteira decimal ]                [ int ]
'\0'                [ Sequência de Escape ]                    [ char ]
"F"                   [ Constante string ]                     [ char ]
-4567.89   [ Constante de ponto flutuante (negativa) ]         [ float ]
```

## Questão 12

a) int a; 
-  **Status (C/I):** Correto 


b) float b;    
-  **Status (C/I):** Correto


c) double float c;    
- **Status (C/I):** Incorreto             
- **Justificativa Teórica:** double e float são tipos distintos, e double não é um modificador de float, portanto a declaração "double float" está incorreta.


d) unsigned char d;  
- **Status (C/I):** Correto (char é um tipo inteiro)


e) unsigned e; 
- **Status (C/I):** Correto (o compilador assume tipo int à variável e)


f) long float f; 
- **Status (C/I):** Incorreto 
- **Justificativa Teórica:** Após a padronização ANSI C, o tipo double foi implementado para maior precisão real (substituto do long float), portanto long float não é mais válido na linguagem C.


g) long g; 
- **Status (C/I):** Correto (o compilador assume tipo int à variável g)


h) long double h; 
- **Status (C/I):** Correto (o modificador long aplica-se ao tipo double)

## Questão 13

**ALTERNATIVA CORRETA:** c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

## Questão 14

**ALTERNATIVA CORRETA:** a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

## Questão 15

**ALTERNATIVA CORRETA:** c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

## Questão 16

**ALTERNATIVA CORRETA:** c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

## Questão 17

**RESPOSTA:** Todas as alternativas estão sinteticamente corretas, exceto a alternativa d) printf "Primeiro programa" ;

O compilador de C demonstra flexibilidade em relação ao espaçamento, ao tratar espaços em branco, tabulações e quebras de linha apenas como separadores de tokens, que são pequenas partes do código completo analisadas pelo compilador para identificar problemas de sintaxe. No entanto, essa flexibilidade não elimina a obrigatoriedade da utilização de elementos sintáticos estruturais fundamentais para o funcionamento do código, como é o caso dos parênteses de uma função e ponto e vírgula no final de uma linha de código.

## Questão 18

```c
#include <stdio.h>

int main()
{

    float lapis = 4.88;
    float borrachas = 234.54;
    float canetas = 42.04;
    float cadernos = 8;
    float fitas = 13.05;

    printf("\n\nLapis%12.2f", lapis);
    printf("\nBorrachas%12.2f", borrachas);
    printf("\nCanetas%12.2f", canetas);
    printf("\nCadernos%12.2f", cadernos);
    printf("\nFitas%12.2f", fitas);

    return 0;
}
```

## Questão 19

```c
#include <stdio.h>

int main()
{

printf("um\n\tdois\n\t\ttres");

return 0;

}
```

## Questão 20

```c
#include <stdio.h>

int main()
{

    printf("\xC9\xCD\xCD\xCD\xCD\xBB\n\xBA    \xBA\n\xBA    \xBA\n\xBA    \xBA\n\xBA    \xBA\n\xC8\xCD\xCD\xCD\xCD\xBC");

    return 0;

}
```

## Questão 21

### Versão 1

```c
#include <stdio.h>

int main()
{
    
    printf("Treinamento em programacao\nLinguagem C");

    return 0;

}
```

### Versão 2

```c
#include <stdio.h>

int main()
{
    
    printf("Treinamento em programacao");
    printf("\nLinguagem C");

    return 0;

}
```

### Versão 3

```c
#include <stdio.h>

int main()
{
    char cima[] = "\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
    char baixo[] = "\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";

    printf("%s\n\xBA Treinamento em programacao \xBA\n\xBA Linguagem C                \xBA\n%s", cima, baixo);

    return 0;

}
```

## Questão 22

```c
#include <stdio.h>

int main() 
{
    char carro[] = "\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF";
    char caminhao[] = "\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";

    printf("%s\n\n%s", carro, caminhao);

    return 0;

}
```

## Questão 23

```c
#include <stdio.h>

int main()
{

    printf("OOOOOOO\nO     O\nO     O\nO     O\nO     O\nO     O\nOOOOOOO");

    return 0;

}
```

## Questão 24

```c
#include <stdio.h>

int main()
{

    char aluno1[] = "ALINE";
    char aluno2[] = "MARIO";
    char aluno3[] = "SERGIO";
    char aluno4[] = "SHIRLEY";

    float nota1 = 9;
    char nota2[] = "DEZ";
    float nota3 = 4.5;
    float nota4 = 7;

    printf("%-12s%s", "ALUNO(A)", "NOTA");
    printf("\n==========  =====");
    printf("\n%-12s%.1f", aluno1, nota1);
    printf("\n%-12s%s", aluno2, nota2);
    printf("\n%-12s%.1f", aluno3, nota3);
    printf("\n%-12s%.1f", aluno4, nota4);

    return 0;

}
```

## Questão 25

```c
#include <stdio.h>

int main()
{

    printf("CCCCC\nC\nC\nCCCCC");

    return 0;

}
```

## Questão 26

```c
#include <stdio.h>

int main()
{

    printf("       X\n");
    printf("      X*X\n");
    printf("    X+XoX+X\n");
    printf("   XoX+X*XoX\n");
    printf("  X+XoXoXoX+X\n");
    printf(" X*X+X*X+X*XXX\n");
    printf("XXXXXXXXXXXXXXX\n");
    printf("      XXX\n");
    printf("      XXX\n");
    printf("     XXXXX\n");

    return 0;

}
```

## Questão 27

```c
#include <stdio.h>

int main()
{

    int intervalo_calc, intervalo_inicial, hora, minuto, segundo;

    printf("Digite um intervalo (em segundos): ");
    scanf("%d", &intervalo_inicial);

    intervalo_calc = intervalo_inicial;

    hora = intervalo_calc/3600;
    intervalo_calc = intervalo_calc - (hora*3600);

    minuto = intervalo_calc/60;
    segundo = intervalo_calc - (minuto*60);

    printf("\nO intervalo de %d segundos equivale a: %d horas, %d minutos, %d segundos.", intervalo_inicial, hora, minuto, segundo);

    return 0;

}
```

## Questão 28

```c
#include <stdio.h>

int main()
{

    int v1, v2, v3;
    double m;

    printf("Digite 3 numeros inteiros:\n");
    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    m = (v1+v2+v3)/3.0;

    printf("A media dos valores %d, %d e %d equivale a: %.2f", v1, v2, v3, m);

    return 0;

}
```
