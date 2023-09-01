import java.io.IOException;
import java.util.Scanner;

public class 1180 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int x[] = new int[n];
        int menor_valor = 0, posicao = 0;

        for(int i = 0; i < n; i++){
            int y = s.nextInt();

            if(i == 0){
                menor_valor = y;
            }

            x[i] = y;

            if(y < menor_valor){
                menor_valor = y;
                posicao = i;
            }
        }

        System.out.println("Menor valor: " + menor_valor);
        System.out.println("Posicao: " + posicao);
    }
}