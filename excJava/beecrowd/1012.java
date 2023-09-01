import java.util.Scanner;

public class 1012 {
    public static void main(String args[]){
        Scanner s = new Scanner(System.in);
        double pi = 3.14159;

        double a = s.nextDouble();
        double b = s.nextDouble();
        double c = s.nextDouble();
    

        double area_triang = (a * c)/2;
        double area_circ = (Math.pow(c,2) * pi);
        double area_trap = ((a+b) * c) / 2;
        double area_quad = (Math.pow(b,2));
        double area_ret = (a*b);


        System.out.printf("TRIANGULO: %.3f\n",area_triang);
        System.out.printf("CIRCULO: %.3f\n",area_circ);
        System.out.printf("TRAPEZIO: %.3f\n",area_trap);
        System.out.printf("QUADRADO: %.3f\n",area_quad);
        System.out.printf("RETANGULO: %.3f\n",area_ret);
    }
}