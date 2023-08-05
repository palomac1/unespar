import java.io.IOException;
import java.util.Scanner;

public class 1118{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        double n1, n2, opcao=1;

        while(opcao==1){
            n1 = s.nextDouble();
            while(n1>10 || n1<0){
                System.out.println("nota invalida");
                n1 = s.nextDouble();
            }

            n2 = s.nextDouble();
            while(n2>10 || n2<0){
                System.out.println("nota invalida");
                n2 = s.nextDouble();
            }

            double media = (n1+n2)/2;
            System.out.printf("media = %.2f\n", media);

            System.out.println("novo calculo (1-sim 2-nao)");

            opcao = s.nextDouble();
            
            while(opcao!=1 && opcao!=2){
                System.out.println("novo calculo (1-sim 2-nao)");
                opcao = s.nextDouble();

            }
        }
   
    }
}