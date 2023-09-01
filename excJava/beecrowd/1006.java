import java.util.Scanner;

public class 1006 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);

        double a = s.nextDouble();
        double b = s.nextDouble();
        double c = s.nextDouble();

        double media = ((a * 2) + (b * 3) + (c * 5)) / 10;

        System.out.printf("MEDIA = %.1f\n",media);
}

}