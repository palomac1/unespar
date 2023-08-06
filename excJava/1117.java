import java.io.IOException;
import java.util.Scanner;

public class 1117 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        double media = 0;
        int nota_valida = 0;
        boolean x = true;

        while(x){
            double nota = s.nextDouble();

            if(nota < 0 || nota > 10){
                System.out.println("nota invalida");
                continue;
            }else{
                media +=  nota;
                nota_valida++;

                if(nota_valida == 2){
                    x = false;
                    continue;
                }
            }
        }//while

        System.out.printf("media = %.2f\n", media/2.0);
    }    
}