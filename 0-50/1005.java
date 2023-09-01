import java.util.Scanner;

public class 1005 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        double a = s.nextDouble();
        double b = s.nextDouble();

        double media = ((a * 3.5) + (b * 7.5)) / 11;

        System.out.printf("MEDIA = %.5f\n",media);
}

}