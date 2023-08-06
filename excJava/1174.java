import java.io.IOException;
import java.util.Scanner;

public class 1174 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        double A[] = new double[100];

        for(int i = 0; i < A.length; i++){
            double n = s.nextDouble();
            A[i] = n;
        }

        for(int i = 0; i < A.length; i++){
            if(A[i] <= 10){
                System.out.printf("A[%d] = %.1f\n", i, A[i]);
            }
        }
    }
}