import java.io.IOException;
import java.util.Scanner;

public class 1158{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int N, X, Y, J, total;

        N = s.nextInt();

        for(int i = 1; i<= N; i++){
            int soma = 0;
            X = s.nextInt();
            Y = s.nextInt();

            for(J = X, total=0; total<Y; J++){
                if(J % 2 != 0){
                    soma += J;
                    total += 1;
                }
            }

            System.out.println(soma);
        }
    }
}