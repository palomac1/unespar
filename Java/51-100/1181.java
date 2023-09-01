import java.io.IOException;
import java.util.Scanner;

public class 1181 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int matriz[][] = new int[12][12];
        int linha = s.nextInt();
        double media = 0, soma = 0;
        String operacao = s.next();

        switch(operacao){
            case "S":
            case "s":
                for(int i = linha - 1; i < linha; i++){
                    for(int j = 0; j < 12; j++){
                        int num = s.nextInt();
                        matriz[linha][j] = num;
                        soma += num;
                    
                        if(j == 11){
                            System.out.printf("%.1f\n",soma);
                        }
                    }
                }
                break;
            case "M":
            case "m":
                for(int i = linha - 1; i < linha; i++){
                    for(int j = 0; j < 12; j++){
                        int num = s.nextInt();
                        matriz[linha][j] = num;
                        media += num;

                        if(j == 11){
                            System.out.printf("%.1f\n",media/j+1);
                        }
                    }
                }
                break;
        }//switch
    }
}