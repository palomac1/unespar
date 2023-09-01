import java.io.IOException;
import java.util.Scanner;

public class 1038 {
		public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int qnt = s.nextInt();
        int cod = s.nextInt();
        double total = 0.0;

    if (cod == 1) {
		total = qnt * 4.0;
	} else if (cod == 2) {
		total = qnt * 4.50;
	} else if (cod == 3) {
		total = qnt * 5.0;
	} else if (cod == 4) {
		total = qnt *2.0;
	} else if (cod == 5) {
		total = qnt * 1.50;
	} else {
		System.out.println("Codigo nao encontrado.");
	}
		System.out.println(String.format("Total: R$ %.2f", total));
    }
 }

