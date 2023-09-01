import java.io.IOException;
import java.util.Scanner;

public class 1144{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int N = s.nextInt();

        for(int i = 1; i <= N; i++){
            System.out.println(i + " " + i*i + " " + i*i*i);
             System.out.println(i + " " + ((i*i)+1) + " " + ((i*i*i)+1));
        }
    }
}