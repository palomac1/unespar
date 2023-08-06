import java.io.IOException;
import java.util.Scanner;

public class 1150{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int X, Z, soma=0, count=0;
        X = s.nextInt();
        Z = s.nextInt();

        while(Z<=X){
            Z = s.nextInt();
        }

        while(soma<Z){
            soma += X;
            count++;
            X++;
        }

        System.out.println(count);
   
    }
}