import java.io.IOException;
import java.util.Scanner;

public class 1016 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int km = s.nextInt();
        int minutos = (60 * km) / 30;
        System.out.println(minutos + " minutos"); 
    }
	
}