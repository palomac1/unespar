import java.io.IOException;
import java.util.Scanner;

public class 1153{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int fatorial=1, N;

        N = s.nextInt();

        for(int i=1; i<=N; i++){
            fatorial *= i;
        }

        System.out.println(fatorial);
    }
}