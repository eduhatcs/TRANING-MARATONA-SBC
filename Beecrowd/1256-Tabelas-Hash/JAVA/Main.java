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

	public void setElemento(int elemento) {
		this.elemento = elemento;
	}

	public int getElemento() {
		return this.elemento;
	}

	public void setProx(Celula prox) {
		this.prox = prox;
	}

	public Celula getProx() {
		return this.prox;
	}

}

class Lista {
	private Celula primeiro;
	private Celula ultimo;

	public Lista() {
		this.primeiro = new Celula();
		this.ultimo = primeiro;
	}

	public void inserirFim(int x) {
		ultimo.setProx(new Celula(x));
		ultimo = ultimo.getProx();
	}

	public void mostrar() {
		Celula i = primeiro.getProx();
		while (i != null) {
			System.out.print(" " + i.getElemento() + " ->");
			i = i.getProx();
		}
		System.out.print(" \\");
	}
}

class TabelaHash {
	private Lista tab[];
	private int n;

	public TabelaHash() {
		this.n = 13;
		this.tab = new Lista[this.n];

		for (int i = 0; i < n; i++) {
			tab[i] = new Lista();
		}
	}

	public TabelaHash(int n) {
		this.n = n;
		this.tab = new Lista[this.n];

		for (int i = 0; i < n; i++) {
			tab[i] = new Lista();
		}
	}

	public int hash(int x) {
		return x % this.n;
	}

	public void inserir(int x) {
		int pos = hash(x);
		tab[pos].inserirFim(x);
	}

	public void mostrar() {
		for (int i = 0; i < n; i++) {
			System.out.print(i + " ->");
			tab[i].mostrar();
			System.out.println();
		}
	}
}

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int N = sc.nextInt(),
		    M = 0,
		    C = 0,
		    X = 0;

		for (int i = 0; i < N; i++) {
			M = sc.nextInt();
			C = sc.nextInt();

			TabelaHash hash = new TabelaHash(M);

			for (int j = 0; j < C; j++) {
				X = sc.nextInt();
				hash.inserir(X);
			}

			hash.mostrar();

			if (i < N-1) {
				System.out.println();
			}
		}	

		sc.close();
	}
}
