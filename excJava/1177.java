import java.io.IOException;
import java.util.Scanner;

public class 1177 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int x = s.nextInt();
        int vetor[] = new int[2000];

        for(int i = 0; i < 1000; i += 3){
            for(int j = 0; j < x; j++){
                vetor[j+i] = j;
            }
        }
        
        for(int i = 0; i < 1000; i++){
            System.out.printf("N[%d] = %d\n", i, vetor[i]);
        }
    }
}