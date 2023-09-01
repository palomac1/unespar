import java.io.IOException;
import java.util.Scanner;

public class 1078{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int res = 0;
        int N = s.nextInt();
          for(int i =1; i <= 10; i++){
            res = i * N;
            System.out.println(i + " x " + N + " = " + res);       
        }
    }
}
