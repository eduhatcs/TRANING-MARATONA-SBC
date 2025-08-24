beecrowd | 1068 <br>Por Neilor Tonin, URI Brasil
 
# Balanço de Parênteses I

Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.

### Entrada

Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

### Saída

O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.

## Exemplo de Entrada
a+(b*c)-2-a <br>
(a+b*(2-c)-2+a)*2 <br> 
(a*b-(2+c) <br>
2*(3-a))   <br>
)3+b*(2-c)( <br>
	
## Exemplo de Saída
correct <br>
correct <br>
incorrect <br>
incorrect <br>
incorrect 
