import java.io.IOException;
import java.util.Scanner;

public class 1151{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int N, prox, atual = 1, anterior = 0;
        N = s.nextInt();

        for(int i = 1; i<=N; i++){
            if(i==N){
                System.out.println(anterior);
            } else{
                System.out.print(anterior + " ");
                prox = anterior + atual;
                anterior = atual;
                atual = prox;
            }
        }
    }
}