/*
Balanço de Parênteses I

Por Neilor Tonin, URI Brasil
Timelimit: 1

Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.
Entrada

Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.
Saída

O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.

Exemplo de Entrada:
a+(b*c)-2-a 
(a+b*(2-c)-2+a)*2 
(a*b-(2+c) 
2*(3-a))  
)3+b*(2-c)( 
	
Exemplo de Saída:
correct
correct
incorrect
incorrect
incorrect 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int esq = 0,
	    dir = 0,
	    n = 0;
	char str[100];

	printf("\t0 - Encerrar programa\n");

	fgets(str, sizeof(str), stdin); // Ler entrada
	str[strcspn(str, "\n")] = '\0'; // Retirar \n (quebra de linha) do final da string

	while (!strcmp(str, "0")) {
		n = strlen(str); // Obter tamanho da palavra

		// Verificar se palavra tem mais de zero caracteres e menos de dez mil caracteres
		if (n >= 1 && n <= 10000) {
			// Repetição para percorrer toda a palavra
			for (int i = 0; i < n; i++) {
				// Verifica abertura de parênteses
				if (str[i] == '(') {
					esq++;
				}
				// Verifica fechamento de parênteses
				else if (str[i] == ')') {
					dir++;
				}
			}

			// Verifica se abertura e fechamento são iguais
			if (esq == dir) {
				printf("correct\n");
			}
			else {
				printf("incorrect\n");
			}

			esq = 0; dir = 0; // Zerando variáveis
		}
		else {
			printf("Frase inválida\n");
		}

		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0';
	}

	return 0;
}
