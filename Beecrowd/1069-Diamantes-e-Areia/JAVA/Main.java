import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = 0,
		    esq = 0,
		    dir = 0,
		    diamantes = 0;
		String str;

		n = sc.nextInt(); // Ler quantidade de entradas
		sc.nextLine(); // Ler \n (quebra de linha)
			
		for (int i = 0; i < n; i++) {
			str = sc.nextLine(); // Ler entrada
			for (int j = 0; j < str.length(); j++) { // Passar por cada caractere da string
				// Verifica se é a abertura com o caractere menor
				if (str.charAt(j) == '<') {
					esq++;
				}
				// Verifica se é o fechamento com o caractere maior
				else if (str.charAt(j) == '>') {
					dir++;
				}
			}

			// Verificar quantidade de diamantes
			while (esq > 0 && dir > 0) {
				diamantes++;
				esq--; dir--;
			}

			System.out.println(diamantes);

			diamantes = 0; esq = 0; dir = 0; // Zerar variáveis
		}

		sc.close();
	}
}
