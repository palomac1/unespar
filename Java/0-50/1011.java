import java.util.Scanner;

public class 1011 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        double pi = 3.14159;

        double raio = s.nextDouble();
        double form = (4/3.0) * (pi * (Math.pow(raio,3)));

        System.out.printf("VOLUME = %.3f\n",form);
    }
}