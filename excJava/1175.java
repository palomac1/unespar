import java.io.IOException;
import java.util.Scanner;

public class 1175 {
 
    public static void main(String[] args) throws IOException {
 
        Scanner s = new Scanner(System.in);
        
        int vetorA[] = new int[20];
        int vetorB[] = new int[20];

        for(int i = 0; i < vetorA.length; i++){
            vetorA[i] = s.nextInt();
            vetorB[(vetorA.length-1) - i] = vetorA[i];
        }
        
        for(int i = 0; i < vetorA.length; i++){
            System.out.printf("N[%d] = %d\n", i, vetorB[i]);
        }
 
    }
 
}