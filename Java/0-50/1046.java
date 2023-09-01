import java.io.IOException;
import java.util.Scanner;

public class 1046{
    public static void main (String[] args) throws IOException{
        Scanner s = new Scanner(System.in);
        int hInicial = s.nextInt();
        int hFinal = s.nextInt();

        if (hInicial > hFinal) { 
            System.out.println("O JOGO DUROU " + (24 - (hInicial - hFinal)) + " HORA(S)");
        } else if (hFinal > hInicial) {
            System.out.println("O JOGO DUROU " + (hFinal - hInicial) + " HORA(S)");
        } else {
            System.out.println("O JOGO DUROU 24 HORA(S)");
        }

    }
    
}