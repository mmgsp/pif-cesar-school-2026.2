# ANÁLISE DO CÓDIGO DA QUESTÃO 08

## CÓDIGO DA QUESTÃO
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

## EXPLICAÇÃO

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
