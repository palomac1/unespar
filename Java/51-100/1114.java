import java.util.Scanner;

public class 1114{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = 2002;

        while (s.nextInt() != n){
            System.out.println("Senha Invalida");
        }
        System.out.println("Acesso Permitido");
        
    }
}