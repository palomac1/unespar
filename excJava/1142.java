import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int count = 1;
        int N = s.nextInt();

        for(int i=1; i<N; i++){
            for(int j=0; j<3; j++){
                System.out.print(count + " ");
                count++;
            }

            System.out.println("PUM");
            count++;
        }
   
    }
}