#include <iostream>
#include <string>

using namespace std;

int main() {
	int esq = 0,
	    dir = 0,
	    fim = 5,
	    i = 0;
	string str;

	cout << "Limite de 5 testes no programa" << endl;
	while (i < fim) {
		cin >> str;

		if (str.length() >= 1 || str.length() <= 10000) {
			for (char letra : str) {
				if (letra == '(') {
					esq++;
				}
				else if (letra == ')') {
					dir++;
				}
			}	

			if (esq == dir) {
				cout << "correct\n";
			}
			else {
				cout << "incorrect\n";
			}
		}
		i++;
	}

	return 0;
}
