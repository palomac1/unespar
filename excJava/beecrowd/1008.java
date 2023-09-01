import java.util.Scanner;

public class 1008 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        int num_func = s.nextInt();
        int num_horas = s.nextInt();
        float valor_hora = s.nextFloat();

        System.out.printf("NUMERO = %d\n",num_func);
        System.out.printf("SALARIO = U$ %.2f\n",(num_horas * valor_hora));
    }
}