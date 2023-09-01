import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int  N, X, totalC=0, totalR=0, totalS=0, cobaias=0;
        double percC=0, percR=0, percS=0;
        String animal;

        N = s.nextInt();
        for(int i =1; i <= N; i++){
            X = s.nextInt();
            animal = s.next();
            cobaias += X;
            
            if (animal.equals("C")) {
                totalC += X;
            } else if (animal.equals("R")) {
                totalR += X;
            } else if (animal.equals("S")) {
                totalS += X;
            }

            percR = (double) (totalR * 100)/cobaias;
            percC = (double) (totalC * 100)/cobaias;
            percS = (double) (totalS * 100)/cobaias;
        }
            System.out.println("Total: " + cobaias + " cobaias");
            System.out.println("Total de coelhos: " + totalC);
            System.out.println("Total de ratos: " + totalR);
            System.out.println("Total de sapos: " + totalS);
            System.out.printf("Percentual de coelhos: %.2f", percC);
            System.out.print(" %\n");
            System.out.printf("Percentual de ratos: %.2f", percR);
            System.out.print(" %\n");
            System.out.printf("Percentual de sapos: %.2f", percS);
            System.out.print(" %\n");
    }
}