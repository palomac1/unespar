import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int I, J;
        float i, j, valor;

        for(i=0, j=1, I=0, J=0, valor=0; i<2.2; j++){

            if(I==0) {
                System.out.printf("I=%.0f J=%.0f\n", i, j);
            } 
            else {
                 System.out.printf("I=%.1f J=%.1f\n", i, j);
            }

            J++;

            if(J==3) {
                i += 0.2;
                valor += 0.2;
                j = valor;
                J=0;
                I++;
            }

            if(I==5) {
                I=0;
            }
        }
    }
}
