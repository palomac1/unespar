import java.io.IOException;
import java.util.Scanner;

public class 1165 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int contador = 0;

        for(int i = 0; i < n; i++){
            int x = s.nextInt();

            for(int j = 1; j <= x; j++){
                if(x %j == 0){
                    contador++;
                }
            }
            if(contador == 2){
                System.out.println("" + x + " eh primo");
            }else{    
                System.out.println("" + x + " nao eh primo");
            }

            contador = 0;
        }
    }
}