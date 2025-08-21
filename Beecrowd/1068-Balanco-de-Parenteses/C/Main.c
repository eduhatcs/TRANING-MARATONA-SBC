#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int i = 0,
	    fim = 5,
	    esq = 0,
	    dir = 0,
	    n = 0;
	char str[100];

	printf("Limite de 5 testes no programa\n");

	while (i < fim) {
		fgets(str, sizeof(str), stdin);
		str[strcspn(str, "\n")] = '\0';

		n = strlen(str);

		for (int i = 0; i < n; i++) {
			if (str[i] == '(') {
				esq++;
			}
			else if (str[i] == ')') {
				dir++;
			}
		}

		if (esq == dir) {
			printf("correct\n");
		}
		else {
			printf("incorrect\n");
		}

		esq = 0; 
		dir = 0; 
		i++;
	}
	return 0;
}
