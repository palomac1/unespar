import java.io.IOException;
import java.util.Scanner;

public class 1145 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        String linha = s.nextLine();
        String[] valores = linha.split("\\s");

        int x = Integer.parseInt(valores[0]);
        int y = Integer.parseInt(valores[1]);

        int inicial = 1;
        int ultimo_numero = 0;
        boolean t = true;

        while(t){
            for(int i = 0; i < x; i++){
                System.out.print(inicial + " ");
                if(inicial > ultimo_numero){
                    ultimo_numero = inicial;
                }

                if(ultimo_numero == y){
                    t = false;
                    continue;
                }else{
                    inicial++;
                }
            }    
            System.out.println();
        }
    }
}