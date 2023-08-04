import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        float primNota, notaVal=0, total_Notas_Val=0, media=0;

        while(notaVal!=2){
            primNota = s.nextFloat();

            if(primNota>=0 && primNota<=10){
                notaVal += primNota;
                total_Notas_Val +=1;
            } else {
                System.out.println("nota invalida");
            }
        }

        media = notaVal/2;
        System.out.printf("media = %.2f\n", media);
    }
}