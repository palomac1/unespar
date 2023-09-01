import java.io.IOException;
import java.util.Scanner;

public class 1146{
    public static void main(String[] args){
        int x;
        Scanner s = new Scanner(System.in);

        while((x=s.nextInt())!=0){
            for(int i=1; i<=x; i++){
                if(i==x){
                    System.out.println(i + "\n");
                } else{
                    System.out.print(i + " ");
                }
            }
        }
    }
}