import java.io.IOException;
import java.util.Scanner;

public class 1115 {
    public static void main(String[] args)throws IOException {
        Scanner s = new Scanner(System.in);

        boolean t = true;

        while(t){
            String linha = s.nextLine();
            String[] valores = linha.split("\\s");

            int x = Integer.parseInt(valores[0]);
            int y = Integer.parseInt(valores[1]);

            if(x == 0 || y == 0){
                t = false;
                continue;
            }else{
                if(x > 0 && y > 0){
                    System.out.println("primeiro");
                }
                
                else if(x < 0 && y > 0){
                    System.out.println("segundo");
                }

                else if(x < 0 && y < 0){
                    System.out.println("terceiro");
                }

                else{
                    System.out.println("quarto");
                }
            }
        }//while
    }
}