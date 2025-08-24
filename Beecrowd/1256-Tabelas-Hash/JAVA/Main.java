import java.util.Scanner;

class Celula {
	private int elemento;
	private Celula prox;

	public Celula() {
		this.elemento = 0;
		this.prox = null;
	}

	public Celula(int elemento) {
		this.elemento = elemento;
		this.prox = null;
	}

}

class Lista {
	private Celula primeiro;
	private Celula ultimo;

	public Lista() {
		this.primeiro = new Celula();
		this.ultimo = primeiro;
	}

	public void inserirInicio(int x) {
		Celula tmp = new Celula(x);
		tmp.prox = primeiro.prox;
		primeiro.prox = tmp;

		if (primeiro == ultimo) {
			ultimo == tmp;
		}

		tmp == null;
	}

	public void inserirFim(int x) {
		ultimo.prox = new Celula(x);
		ultimo = ultimo.prox;
	}
}

class TabelaHash {
	private int tab[];
	private int n;

	public TabelaHash() {
		this.n = 13;
		this.tab = new int[this.n];

		for (int i = 0; i < n; i++) {
			tab[i] = null;
		}
	}

	public TabelaHash(int n) {
		this.n = n;
		this.tab = new int[this.n];

		for (int i = 0; i < n; i++) {
			tab[i] = null;
		}
	}

	public void hash(int x) {
		return x % this.n;
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int M = 0,
		    C = 0;

		sc.close();
	}
}
