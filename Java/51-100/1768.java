import java.util.Scanner;

public class 1768 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            int n = scanner.nextInt();

            if (n % 2 == 0) {
                continue; // Ignora tamanhos pares
            }

            desenharArvore(n);
            System.out.println(); // Linha em branco entre as árvores
        }

        scanner.close();
    }

    public static void desenharArvore(int n) {
        int tronco = (n - 3) / 2;

        for (int i = 1; i <= n; i += 2) {
            int espacos = (n - i) / 2;
            String linha = " ".repeat(espacos) + "*".repeat(i);
            System.out.println(linha);
        }

        for (int i = 0; i < tronco; i++) {
            int espacos = (n - 1) / 2;
            String linha = " ".repeat(espacos) + "*";
            System.out.println(linha);
        }
    }
}
