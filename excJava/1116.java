import java.io.IOException;
import java.util.Scanner;

public class 1116{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        double x, y;
        int N = s.nextInt();

        for(int i=0;i<N;i++){
            x = s.nextDouble();
            y = s.nextDouble();

            if(y==0){
                System.out.println("divisao impossivel");
            } else {
                System.out.printf("%.1f\n", x/y);
            }

        }
    }
}