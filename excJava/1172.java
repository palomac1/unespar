import java.util.Scanner;
import java.io.IOException;

public class 1172{
    public static void main(String args[])throws IOException{
        Scanner s = new Scanner(System.in);

        int x[] = new int[10];

        for(int i = 0; i < 10; i++){
            int valor = s.nextInt();
            
            if(valor <= 0){
                x[i] = 1;
            }else{
                x[i] = valor;
            }
        }

        for(int i = 0; i < 10; i++){
            System.out.printf("X[%d] = %d\n", i, x[i]);
        }
    }
}