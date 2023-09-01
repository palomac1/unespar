import java.io.IOException;
import java.util.Scanner;

public class 1173 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int vetor[] = new int[10];
        int valor = s.nextInt();

        for(int i = 1; i <= vetor.length; i++){
            vetor[i-1] = valor * i;
        }

        for(int i = 1; i <= vetor.length; i++){
            System.out.printf("N[%d] = %d\n", i-1, vetor[i-1]);
        }
    }
}