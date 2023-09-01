import java.io.IOException;
import java.util.Scanner;

public class 1064 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int cont = 0;
        double media = 0;
        double x;
        
        for (int i = 0; i < 6; i++) {
        	x = s.nextDouble();
        	if (x > 0) {
        		cont++;
        		media += x;
        	}
        }
        
        media = media / cont;
        System.out.println(cont + " valores positivos");
        System.out.println(String.format("%.1f", media));
    }
	
}