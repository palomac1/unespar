import java.util.Scanner;

public class 1013 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
       
        int a = s.nextInt();
        int b = s.nextInt();
        int c = s.nextInt();

        int maior = (a + b + Math.abs(a-b)) / 2;
        int maiorABC = (maior + c + Math.abs(maior - c)) / 2; 

        
        System.out.printf("%d eh o maior\n",maiorABC);
    }
}