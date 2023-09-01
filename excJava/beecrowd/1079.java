import java.io.IOException;
import java.util.Scanner;

public class 1079{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
         for(int i = 0; i < N; i++){
            double x = s.nextDouble();
            double y = s.nextDouble();
            double z = s.nextDouble();

            double media = (x * 2 + y * 3 + z * 5)/10;

            System.out.printf("%.1f\n", media);
         }
    }
}