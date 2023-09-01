import java.util.Scanner;

public class 1014 {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
    
        int x = s.nextInt();
        float y = s.nextFloat();

        float consumo = (x / y);

        System.out.printf("%.3f km/l \n",consumo);
    }
}