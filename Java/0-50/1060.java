import java.io.IOException;
import java.util.Scanner;

public class 1060 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int cont = 0;
        for (int i=0; i < 6; i++) {
        	double n = s.nextDouble();
        	if (n > 0) cont++;
        }
        System.out.println(cont + " valores positivos");
    }
	
}