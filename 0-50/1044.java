import java.io.IOException;
import java.util.Scanner;

public class 1044 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);
        int A = s.nextInt();
        int B = s.nextInt();

        if(A % B == 0 || B % A == 0 ){
            System.out.println("Sao multiplos");
        }
        else{
            System.out.println("Nao sao multiplos");
        }

    }
}


     