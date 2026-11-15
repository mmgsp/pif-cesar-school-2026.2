# Questão 04 — Recursão: Caso Base, Passo Recursivo e Pilha de Execução

### A) Identifique o caso base e o passo recursivo. O que aconteceria se o caso base fosse removido?

Resposta: O **caso base** é `n == 0`, em que a função retorna `1` sem fazer nova chamada. O **passo recursivo** é `n * fatorial(n - 1)`, em que a função chama a si mesma com um valor menor. Se o caso base fosse removido, a função continuaria chamando a si mesma indefinidamente (`n` passaria por 0, -1, -2...), sem nunca parar, até esgotar a memória da pilha e o programa falhar.

### B) Faça o rastreamento completo da chamada `fatorial(4)`, mostrando a fase de empilhamento e a fase de desempilhamento, com o valor devolvido por cada chamada.

Resposta:

**Fase de empilhamento (chamadas):**
- `fatorial(4)` → precisa de `4 * fatorial(3)`
- `fatorial(3)` → precisa de `3 * fatorial(2)`
- `fatorial(2)` → precisa de `2 * fatorial(1)`
- `fatorial(1)` → precisa de `1 * fatorial(0)`
- `fatorial(0)` → caso base, retorna `1`

**Fase de desempilhamento (retornos):**
- `fatorial(0)` devolve `1`
- `fatorial(1)` devolve `1 * 1 = 1`
- `fatorial(2)` devolve `2 * 1 = 2`
- `fatorial(3)` devolve `3 * 2 = 6`
- `fatorial(4)` devolve `4 * 6 = 24`

Resultado final: `fatorial(4) = 24`.

### C) Explique, em termos de pilha de execução, o que acontece na memória a cada chamada recursiva e por que uma recursão sem caso base pode causar falha no programa.

Resposta: A cada chamada recursiva é criado na pilha de execução um novo registro de ativação (quadro), contendo o parâmetro `n`, as variáveis locais e o endereço de retorno. A chamada anterior fica suspensa, aguardando o resultado da nova. Quando o caso base é atingido, os quadros são removidos um a um, do topo para a base, e cada um devolve seu valor à chamada que o aguardava. Sem caso base, novos quadros são empilhados continuamente e nunca desempilhados, até a pilha, que tem tamanho limitado, estourar (*stack overflow*), o que encerra o programa de forma abrupta.
