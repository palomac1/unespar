import java.util.Scanner;

public class 1035 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
       
        int A = s.nextInt();        
        int B = s.nextInt();
        int C = s.nextInt();
        int D = s.nextInt();
                
        if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && ((A%2) == 0)){
            System.out.println("Valores aceitos");
        } else {
            System.out.println("Valores nao aceitos");
            
        }
 
    }
} 