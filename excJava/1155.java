import java.io.IOException;
import java.util.Scanner;

public class 1155{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        double S = 1;

        for(int i = 2; i<=100; i++){
            S += 1.00/i;
        }

        System.out.printf("%.2f\n", S);
    }
}