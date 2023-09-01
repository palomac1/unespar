import java.io.IOException;
import java.util.Scanner;

public class 1149{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int A, N, soma=0;

         A = s.nextInt();
         N = s.nextInt();

        while(N <= 0){
            N = s.nextInt();
        }
        for(int i = 1; i <= N; i++){
            soma += A;
            A++;
        }

        System.out.println(soma);
    }
}