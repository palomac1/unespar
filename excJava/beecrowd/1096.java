import java.io.IOException;
import java.util.Scanner;

public class 1096{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);

        for(int i=1;i<=9;i+=2){
            for(int I=i, j=7;j>=5;j-=1){
                System.out.println("I="+I+" J="+j);
            }
        } 
    }
} 