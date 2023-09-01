import java.util.Scanner;

public class 1113{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x,y;
        
        while ((x=s.nextInt()) != (y=s.nextInt())){
            if (x > y){
                System.out.println("Decrescente");
            } else{
                System.out.println("Crescente");
            }
        }
    }
}