# Questão 06 — Diretivas `#include`, `#undef` e Compilação Condicional

### A) Qual é a diferença entre `#include <stdio.h>` e `#include "areas.h"`? Em que situação usamos cada sintaxe?

Resposta: Com `<stdio.h>`, o pré-processador procura o arquivo nos diretórios padrão do compilador, onde ficam as bibliotecas da linguagem C. Com `"areas.h"`, ele procura primeiro no diretório do projeto (onde está o arquivo-fonte) e, se não encontrar, procura nos diretórios padrão. Usamos `<...>` para bibliotecas padrão e `"..."` para cabeçalhos criados pelo próprio programador.

### B) Qual é o efeito de `#undef SOMA`? Por que a forma `#undef SOMA(x,y)` está incorreta?

Resposta: `#undef SOMA` cancela a definição da macro `SOMA`, que deixa de existir a partir daquela linha (usos posteriores não serão expandidos). A forma `#undef SOMA(x,y)` está incorreta porque `#undef` recebe apenas o nome do identificador, sem a lista de parâmetros.

### C) Se `DEBUG` não foi definido, qual mensagem será impressa? Explique em que momento (pré-processamento ou execução) essa decisão é tomada e por que as diretivas não aparecem no executável final.

Resposta: Será impressa a mensagem `Modo normal`. A decisão é tomada no **pré-processamento**, antes da compilação: como `DEBUG` não está definido, o pré-processador descarta o trecho do `#ifdef` e mantém apenas o do `#else`. As diretivas são instruções para o pré-processador, que as resolve e as remove; o compilador recebe só o código resultante, e por isso nenhuma diretiva aparece no executável final.
