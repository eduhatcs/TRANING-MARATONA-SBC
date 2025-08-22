#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 0,
	    esq = 0,
	    dir = 0,
	    diamantes = 0,
	    tam = 0;
	char str[1000];

	scanf("%d", &n); // Ler quantidade de entradas
	getchar(); // Ler \n (quebra de linha)

	for (int i = 0; i < n; i++) {
		fgets(str, sizeof(str), stdin); // Ler entrada
		str[strcspn(str, "\n")] = '\0'; // Remover \n (quebra de linha) da string

		tam = strlen(str); // Obter tamanho da string

		for (int j = 0; j < tam; j++) { // Repetição verificar toda a string
			// Verifica abertura de caractere menor
			if (str[j] == '<') { 
				esq++;
			}
			// Verifica fechamento de caractere maior
			else if (str[j] == '>') {
				dir++;
			}
		}

		// Repetição para contar quantidade de diamantes
		while (esq > 0 && dir > 0) {
			diamantes++;
			esq--; dir--;
		}

		printf("%d\n", diamantes);

		diamantes = 0; esq = 0; dir = 0; // Zerando variáveis inteiras
	}

	return 0;
}
