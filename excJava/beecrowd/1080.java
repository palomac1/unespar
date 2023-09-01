import java.io.IOException;
import java.util.Scanner;

public class 1080{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int maior = 0;
        int posicao = 1;
        for(int i = 1; i <=100; i++){
            int x = s.nextInt();
            if(i == 1){
                maior = x;
                posicao = 1;
            } else if (x > maior){
                maior = x;
                posicao = i; 
            }
        }

        System.out.println(maior);
        System.out.println(posicao);
    }
} 