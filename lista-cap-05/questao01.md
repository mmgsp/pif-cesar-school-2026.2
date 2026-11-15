# Questão 01 — Anatomia de uma Função e o Papel do Protótipo

### A) Identifique no código o protótipo, a chamada e a definição da função `celsius()`. Explique o papel de cada uma dessas três etapas.

Resposta:
- **Protótipo:** `float celsius(float);` — declara, antes da `main()`, o nome da função, o tipo do valor retornado e os tipos dos parâmetros. Ele "apresenta" a função ao compilador.
- **Chamada:** `c = celsius(f);` — dentro da `main()`, é o momento em que a função é executada. O valor de `f` é enviado como argumento e o valor retornado é guardado em `c`.
- **Definição:** o bloco `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }` — contém o corpo da função, ou seja, as instruções que realmente fazem a conversão e devolvem o resultado com `return`.

### B) Qual é a função do protótipo para o compilador? O que aconteceria, em termos de verificação de parâmetros, se ele fosse omitido e a função fosse definida depois da `main()`?

Resposta: O protótipo informa ao compilador o nome, o tipo de retorno, a quantidade e os tipos dos parâmetros antes de a função ser usada. Com isso, o compilador consegue verificar cada chamada e converter os argumentos para o tipo esperado. Se ele fosse omitido e a função fosse definida depois da `main()`, o compilador não conheceria a função no momento da chamada: em compiladores mais antigos ele assumiria um retorno `int` e não verificaria a quantidade nem o tipo dos argumentos, podendo produzir resultados incorretos (o `float` devolvido seria interpretado como `int`); em compiladores atuais (C99 em diante) isso gera aviso ou erro de declaração implícita.

### C) Qual é o tipo da função `celsius()`? Explique por que o tipo de uma função é determinado pelo valor retornado e não pelos parâmetros recebidos.

Resposta: O tipo da função `celsius()` é `float`. O tipo de uma função é o tipo do valor que ela devolve ao ponto onde foi chamada, pois a chamada funciona como uma expressão que assume esse valor (por exemplo, em `c = celsius(f);` a chamada é substituída por um `float`). Os parâmetros são apenas dados de entrada e podem ter tipos diferentes do tipo de retorno.
