import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("\t0 - Encerrar programa");

		String str = sc.nextLine();
		int dir = 0,
		    esq = 0;

		while (!str.equals("0")) {
			// Verifica se a palavra contém mais de zero caracteres e menos de dez mil caracteres
			if (str.length() >= 1 && str.length() <= 10000) {
				for (int i = 0; i < str.length(); i++) {
					// Verifica abertura de parênteses
				if (str.charAt(i) == '(') { 
					esq++;
				}
				// Verifica fechamento de parênteses
				else if (str.charAt(i) == ')') {
					dir++;
				}
			}

			// Verifica se abertura e fechamento são iguais
			if (esq == dir) {
				System.out.println("correct");
			}
			else {
				System.out.println("incorrect");
			}

			dir = 0; esq = 0; // Zera as variáveis inteiras

			str = sc.nextLine(); // Ler entrada
		}

		sc.close();
	}
}
