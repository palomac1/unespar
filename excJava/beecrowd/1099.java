import java.io.IOException;
import java.util.Scanner;

public class 1099{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int qtd_casos = s.nextInt();
        int n1,n2,x;

        for (int i=0;i<qtd_casos;i++){
            n1 =  s.nextInt();
            n2 = s.nextInt();
            x = 0;
            if (n1<n2){
                for (int j=n1+1;j<n2;j++){
                    if (j%2 != 0){
                        x += j;
                    }
                }
            }
            else {
                for (int j=n2+1;j<n1;j++){
                    if (j%2 != 0){
                        x += j;
                    }
                }
            }
            System.out.printf("%d\n",x);
        }

    }
}