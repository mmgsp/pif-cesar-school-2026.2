# Questão 05. Estruturas de Repetição: for, while e do-while

**a)**  
- `while`: pode executar 0 vezes, pois a condição é testada antes do bloco.
- `do-while`: executa pelo menos 1 vez, pois a condição é testada depois do bloco.

**b)**  
O `for` é mais adequado quando sabemos ou controlamos claramente a inicialização, condição e incremento, como em contagens e percursos de vetores. Ele deixa essas três partes organizadas em uma única linha, tornando o código mais legível.

**c)**  
`while (condicao);` é sintaticamente válid*, portanto não é erro de compilação. É um erro de lógica, pois o `;` representa um corpo vazio. Se `condicao` for verdadeira, o programa fica preso em um loop infinito, até que a condição se torne falsa.