/*
Balanço de Parênteses I

Por Neilor Tonin, URI Brasil

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

Exemplo de Entrada 	
a+(b*c)-2-a 
(a+b*(2-c)-2+a)*2 
(a*b-(2+c) 
2*(3-a))  
)3+b*(2-c)( 
	
Exemplo de Saída
correct
correct
incorrect
incorrect
incorrect 
*/

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
