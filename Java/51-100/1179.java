import java.io.IOException;
import java.util.Scanner;

public class 1179{
    public static void main(String args[])throws IOException{
        Scanner s = new Scanner(System.in);
        
        int vetorPar[] = new int[5];
        int vetorImpar[] = new int[5];
        int contadorPar = 0;
        int contadorImpar = 0;
        
        for(int i = 0; i < 15; i++){
            int valor = s.nextInt();
            
            if(valor %2 == 0){
                vetorPar[contadorPar] = valor;
                contadorPar++;
            }else{
                vetorImpar[contadorImpar] = valor;
                contadorImpar++;
            }
        
            if(contadorPar == 5){
                for(int j = 0; j < 5; j++){
                    System.out.printf("par[%d] = %d\n", j, vetorPar[j]);
                    contadorPar = 0;
                }
            }
            
            else if(contadorImpar == 5){
                for(int j = 0; j < 5; j++){
                    System.out.printf("impar[%d] = %d\n", j, vetorImpar[j]);
                    contadorImpar = 0;
                }
            }

            if(i == 14){
                if((i >= 10 && i <= 14) && (contadorPar != 5 && contadorImpar != 5)){
                    for(int d = 0; d <= contadorPar; d++){
                        System.out.printf("impar[%d] = %d\n", d, vetorImpar[d]);
                    }
                    
                    for(int d = 0; d < contadorPar; d++){
                        System.out.printf("par[%d] = %d\n", d, vetorPar[d]);
                    }
                    
                }
            }

        }          
    }
}