import java.util.Scanner;

public class 1009 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        String nome = s.nextLine();
        double salario = s.nextFloat();
        double vendas = s.nextFloat();

        double com = salario + (vendas * 15)/100;

        System.out.printf("TOTAL = R$ %.2f\n",com);
    }
}