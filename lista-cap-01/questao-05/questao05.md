# ANÁLISE DO CÓDIGO DA QUESTÃO 05

## CÓDIGO DA QUESTÃO

main()
{
printf("Linguagem C");
system("pause");
}

## ANÁLISE

1. Faltaram as seguintes diretivas para que o código funcione corretamente: #include <stdio.h>  e #include <stdlib.h>

2. Faltou declarar a função main corretamente: int main() 

3. Faltou declarar também o retorno da função main: return 0;

4. A nível de organização, seria preferível adicionar uma quebra de linha (\n) ao final da string dentro do printf (Opcional pois não afeta a compilação e execução do código)
