import java.io.IOException;
import java.util.Scanner;

public class 1176 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        double vetor[] = new double[n+60];

        for(int j = 0; j < n; j++){
            int d = s.nextInt();

            for(int i = 0; i < d+1; i++){
                if(i < 2){
                    vetor[i] = i;
                }else{
                    vetor[i] = vetor[i-1] + vetor[i-2];
                }
            }
            
            System.out.printf("Fib(%d) = %d\n", d, (int)vetor[d]);
        }
            
    }
}