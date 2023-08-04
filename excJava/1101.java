import java.util.Scanner;

public class 1101{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int m,n,soma;

        while (((n=s.nextInt()) > 0) && ((m=s.nextInt())>0)){
            if (m > n){
                soma = 0;
                for (int i=n;i<=m;i++){
                    System.out.printf("%d ",i);
                    soma += i;
                }
                System.out.printf("Sum=%d\n",soma);
            }
            else{
                soma = 0;
                for(int j=m;j<=n;j++){
                    System.out.printf("%d ",j);
                    soma += j;
                }
                System.out.printf("Sum=%d\n",soma);
            }
        }
      }
        
    }

    