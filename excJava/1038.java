import java.util.Scanner;
import java.io.IOException;

public class 1038 {
    public static void main(String[] args)throws IOException {
		Scanner s = new Scanner(System.in);
		
		String linha = s.nextLine();
		String[] valores = linha.split("\\s");
		
		int codigo = Integer.parseInt(valores[0]);
		int quantidade = Integer.parseInt(valores[1]);
		double total = 0;
		
		if(codigo == 1) {
			total = quantidade * 4.0;
			System.out.printf("Total: R$ %.2f\n", total);
		}
		
		else if(codigo == 2) {
			total = quantidade * 4.5;
			System.out.printf("Total: R$ %.2f\n", total);
		}
		
		else if(codigo == 3) {
			total = quantidade * 5.0;
			System.out.printf("Total: R$ %.2f\n", total);
		}
		
		else if(codigo == 4) {
			total = quantidade * 2.0;
			System.out.printf("Total: R$ %.2f\n", total);
		}
		
		else if(codigo == 5) {
			total = quantidade * 1.5;
			System.out.printf("Total: R$ %.2f\n", total);
		}
			
	}//static void
}