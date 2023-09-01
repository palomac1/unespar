import java.io.IOException;
import java.util.Scanner;

public class 1154{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

    	int idade = sc.nextInt();
		int contador = 0;
		double soma = 0, media = 0;

		while (idade >= 0) {
			contador++;
			soma += idade;
			idade = sc.nextInt();
		}

		media = soma / contador;
		System.out.printf("%.2f%n", media);
    }
}