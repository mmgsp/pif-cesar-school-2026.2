# Questão 03 — Funções `void`, Parâmetros e Assinaturas

### A) Classifique cada protótipo quanto à existência de parâmetros de entrada e de valor de retorno.

Resposta:
- `void exibe_mensagem(char* msg);` — **possui** parâmetro de entrada (`char*`) e **não possui** valor de retorno.
- `int obter_codigo(void);` — **não possui** parâmetros de entrada e **possui** valor de retorno (`int`).
- `void limpar_tela(void);` — **não possui** parâmetros de entrada e **não possui** valor de retorno.

### B) Qual é a diferença prática entre uma função com retorno e um procedimento (função `void`)? Dê um exemplo de situação em que cada um é a escolha mais adequada.

Resposta: Uma função com retorno devolve um valor ao chamador, que pode ser guardado em uma variável ou usado em expressões. Um procedimento (`void`) apenas executa uma ação e não devolve nada. A função com retorno é mais adequada quando o resultado será usado depois, por exemplo, `float celsius(float fahr)`, que calcula uma conversão de temperatura. O procedimento é mais adequado quando o objetivo é realizar uma ação, como `void exibeMenu(void)`, que apenas imprime um menu na tela.

### C) Uma chamada como `x = limpar_tela();` é válida? Justifique com base no tipo da função.

Resposta: Não. A função `limpar_tela()` é do tipo `void`, ou seja, não devolve valor algum. Como não há valor para ser atribuído a `x`, a instrução gera erro de compilação. A chamada correta seria apenas `limpar_tela();`.
