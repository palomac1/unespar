import java.io.IOException;
import java.util.Scanner;

public class 1097{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i =1, j = 7;

        while (i <=9) {
            System.out.printf("I=%d J=%d\n", i, j);
            System.out.printf("I=%d J=%d\n", i, j-1);
            System.out.printf("I=%d J=%d\n", i, j-2);

            i+=2;
            j+=2;

        }
    }
} 