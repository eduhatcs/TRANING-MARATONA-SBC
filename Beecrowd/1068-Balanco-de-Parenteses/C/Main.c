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
