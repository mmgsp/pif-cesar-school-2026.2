### A) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento em que a condição de teste é avaliada?

Resposta: No while, a condição é avaliada antes da execução do bloco. Se a condição for falsa logo na primeira verificação, o bloco nunca é executado, ou seja, o número mínimo de execuções é zero. No do-while, a condição é avaliada somente depois da execução do bloco, então o bloco é executado pelo menos uma vez, independentemente do resultado do teste.

### B) Em que situações de programação cada uma das três estruturas (for, while e do-while) se apresenta como a escolha mais elegante, legível e adequada?

Resposta: O for é a escolha mais adequada quando o número de repetições é conhecido ou controlado por um contador, pois reúne inicialização, teste e incremento em uma única linha (ex.: percorrer de 1 a 100). O while é mais adequado quando o número de repetições não é conhecido de antemão e o laço pode nem precisar executar, como na leitura de dados até encontrar um valor sentinela. O do-while é ideal quando o bloco precisa executar pelo menos uma vez, como em menus de opções e validação de entrada de dados, onde o usuário precisa digitar o valor antes de ele ser testado.

### C) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução se condicao for verdadeira.

Resposta: É um erro de lógica, e não de compilação. O ponto-e-vírgula é interpretado pelo compilador como uma instrução vazia, que passa a ser o corpo do laço. Portanto, o código compila normalmente (no máximo com um aviso, dependendo do compilador). Se condicao for verdadeira e nada alterar o seu valor, o programa fica preso em um laço infinito, testando a condição repetidamente sem fazer nada, e o bloco de código que estava logo abaixo do while nunca é executado, pois ele deixa de pertencer ao laço. Se a condição for falsa desde o início, o laço simplesmente termina e o programa segue normalmente.
