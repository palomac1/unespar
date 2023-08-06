import java.io.IOException;
import java.util.Scanner;

public class 1157{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int N = s.nextInt();

        for(int i = 1; i<= N; i++){
            if(N % i == 0){
                System.out.println(i);
            }
        }
    }
}