import java.io.IOException;
import java.util.Scanner;

public class 1178{
    public static void main(String args[])throws IOException{
        Scanner s = new Scanner(System.in);
        
        double n[] = new double[100];
        double x = s.nextDouble();
        
        for(int i = 0; i < n.length; i++){
            if(i == 0){
                n[i] = x;
            }else{
                n[i] = n[i-1] / 2.0;
            }
        }
        
        for(int i = 0; i < n.length; i++){
            System.out.printf("N[%d] = %.4f\n", i, n[i]);
        }
        
    }
}