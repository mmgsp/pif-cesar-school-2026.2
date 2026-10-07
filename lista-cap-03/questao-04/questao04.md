### A) Descreva a ação exata executada pelo programa quando o comando break é acionado dentro de um laço for ou while.

Resposta: Quando o break é executado, o laço é encerrado imediatamente. O restante do corpo da iteração atual é ignorado, a condição de teste não é mais avaliada e a execução continua na primeira instrução logo após o laço.

### B) Descreva a ação exata executada pelo programa quando o comando continue é acionado dentro de um laço for. Qual das três expressões do cabeçalho do for é executada imediatamente após o continue?

Resposta: O continue interrompe apenas a iteração atual: o restante do corpo do laço é pulado e o programa segue para a próxima iteração, sem encerrar o laço. No for, a expressão executada imediatamente após o continue é a terceira, a de incremento (por exemplo, i++), e só depois a condição de teste (segunda expressão) é avaliada para decidir se o laço continua.

### C) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo), qual laço é interrompido quando a instrução break é executada dentro do laço interno?

Resposta: Apenas o laço interno, que é o mais próximo do break. O laço externo continua normalmente, avançando para a sua próxima iteração e, se a condição permitir, executando novamente o laço interno desde o início.
