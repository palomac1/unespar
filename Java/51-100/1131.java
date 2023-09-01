import java.io.IOException;
import java.util.Scanner;

public class 1131{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int golsInter, golsGrem;
        int vitoriasInter=0;
        int vitoriasGrem=0;
        int empates=0, partidas=0, opcao=1;

        while(opcao==1){
            partidas++;
            golsInter = s.nextInt();
            golsGrem = s.nextInt();

            System.out.println("Novo grenal (1-sim 2-nao)");
            opcao = s.nextInt();

            if(golsInter > golsGrem){
                vitoriasInter++;
            } else if(golsGrem>golsInter){
                vitoriasGrem++;
            } else{
                empates++;
            }

            while(opcao != 1 && opcao != 2){
                System.out.println("Novo grenal (1-sim 2-nao)");
                opcao = s.nextInt();
            }
        }

        System.out.println(partidas + " grenais");
        System.out.println("Inter:" + vitoriasInter);
        System.out.println("Gremio:" + vitoriasGrem);
        System.out.println("Empates:" + empates);
        
        if(vitoriasInter>vitoriasGrem){
            System.out.println("Inter venceu mais");
        } else if(vitoriasGrem>vitoriasInter){
            System.out.println("Gremio venceu mais");
        } else{
            System.out.println("Nao houve vencedor");
        }
   
    }
}