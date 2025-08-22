#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0,
	    esq = 0,
	    dir = 0,
	    diamantes = 0;

	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		for (char letra : str) { // Laço For Each para ler toda a string
			// Verifica abertura do caractere menor
			if (letra == '<') { 
				esq++;
			}	
			// Verifica fechamento do caractere maior
			else if (letra == '>') {
				dir++;
			}
		}
		
		// Contar quantidade de diamantes
		while (esq > 0 && dir > 0) {
			diamantes++;
			esq--; dir--;
		}

		cout << diamantes << endl;

		diamantes = 0; esq = 0; dir = 0; // Zera variáveis inteiras
	}

	return 0;
}
