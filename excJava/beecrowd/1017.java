import java.io.IOException;
import java.util.Scanner;

public class 1017 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int tempo = s.nextInt();
        int velocidade = s.nextInt();
        double km = tempo * velocidade;
        double vmedia = km / 12;

        System.out.println(String.format("%.3f", vmedia)); 
    }
	
}