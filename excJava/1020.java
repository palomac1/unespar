import java.io.IOException;
import java.util.Scanner;

public class  1020 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int idade = s.nextInt();
        int anos = idade / 365;
        idade -= anos * 365;
        int meses = idade / 30;
        idade -= meses * 30;
        int dias = idade;
          System.out.println(anos + " ano(s)");
        System.out.println(meses + " mes(es)");
        System.out.println(dias + " dia(s)");	
    }
	
}


       