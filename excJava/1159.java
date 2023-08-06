import java.io.IOException;
import java.util.Scanner;

public class 1159{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int N;

        while((N=s.nextInt())!=0){
            int soma = 0;

            for(int i = N, j = 1; j<=5; i++){
                if(i % 2 == 0){
                    soma += i;
                    j += 1;
                }
            }

            System.out.println(soma);
        }
    }
}