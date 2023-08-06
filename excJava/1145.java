import java.io.IOException;
import java.util.Scanner;

public class 1145{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        int x = s.nextInt();
        int y = s.nextInt();

        for(int i = 1; i <= y; i++){
            System.out.println(i);

            if(i % x == 0){
                System.out.println(" ");
            } else {
                System.out.println(" ");
            }
        }
    }
}