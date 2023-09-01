import java.io.IOException;
import java.util.Scanner;

public class 1156{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        float S = 1, i, j;

        for(i=3, j=2; i<=39; i+=2, j*=2){
            S += i/j;
        }
       System.out.printf("%.2f\n", S);
    }
}