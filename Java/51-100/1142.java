import java.io.IOException;
import java.util.Scanner;

public class 1142 {
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int t = 1;
        boolean x = true;


        for(int i = 0; i < n; i++){
            x = true;
            while(x){
                if(t %4 != 0){
                    System.out.print("" + t + " ");
                }else{
                    System.out.println("PUM");
                    x = false;
                }
                t++;
            }        
        }
        
    }
}