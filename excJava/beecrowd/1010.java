import java.util.Scanner;

public class 1010 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        int code = s.nextInt();
        int num = s.nextInt();
        float valor_un = s.nextFloat();
        int code2 = s.nextInt();
        int num2 = s.nextInt();
        float valor_un2 = s.nextFloat();
    
        float total = (num * valor_un) + (num2 * valor_un2);

        System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);
    
    }
}