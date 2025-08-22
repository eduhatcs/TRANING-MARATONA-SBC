#include <iostream>
#include <string>

using namespace std;

int main() {
	int esq = 0,
	    dir = 0;
	string str;

	cout << "\t0 - Encerrar programa" << endl;
	cin >> str;

	while (str != "0") {
		
		// Verifica de a palavra tem mais de zero caracteres e menos de dez mil caracteres
		if (str.length() >= 1 || str.length() <= 10000) {
			// Repetição passando por toda a palavra
			for (char letra : str) {
				// Verifica abertura de parênteses
				if (letra == '(') {
					esq++;
				}
				// Verifica fechamento de parênteses
				else if (letra == ')') {
					dir++;
				}
			}	

			// Verifica se abertura e fechamento são iguais
			if (esq == dir) {
				cout << "correct\n";
			}
			else {
				cout << "incorrect\n";
			}

			esq = 0; dir = 0; // Zerando variáveis
		}
		else {
			cout << "Frase inválida" << endl;
		}
		
		cin >> str; // Ler entrada
	}

	return 0;
}
