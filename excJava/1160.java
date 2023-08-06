import java.io.IOException;
import java.util.Scanner;

public class 1160{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int T, PA, PB, anos;
        double G1, G2;

        T = s.nextInt();

        for(int i = 1; i<=T; i++){
            anos = 0;
            PA = s.nextInt();
            PB = s.nextInt();
            G1 = s.nextInt();
            G2 = s.nextInt();

            while(PB >= PA){
                PA += (PA * G1)/100;
                PB += (PB * G2)/100;
                anos++;

                if(anos > 100){
                    break;
                } 
            }

            if(anos > 100){
                 System.out.println("Mais de 1 seculo.");
            } else{
                System.out.println(anos + " anos.");
            }
        }
    }
}