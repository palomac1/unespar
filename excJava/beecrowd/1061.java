import java.util.Scanner;

public class 1061{
    public static void main (String[] args){
        Scanner s = new Scanner(System.in);
        int dia1, hora1, minuto1, segundo1;
        int dia2, hora2, minuto2, segundo2;
        String dia;

        dia = s.next();
        dia1 = s.nextInt();
        hora1 = s.nextInt();
        s.next();
        minuto1 = s.nextInt();
        s.next();
        segundo1 = s.nextInt();

        dia = s.next();
        dia2 = s.nextInt();
        hora2 = s.nextInt();
        s.next();
        minuto2 = s.nextInt();
        s.next();
        segundo2 = s.nextInt();

        int inicio = ( dia1 * 24 * 60 * 60)+ (hora1 * 60 * 60) + (minuto1 * 60) + segundo1;
        int fim = (dia2 * 24 * 60 * 60) + (hora2 * 60 * 60) + (minuto2 * 60) + segundo2;

        int segundosTotal = fim - inicio;

        int dias = segundosTotal / (24*60*60);
        int resto = segundosTotal % (24*60*60);
        System.out.println(dias + "dia(s)");

        int horas = resto / (60*60);
        resto = resto % (60*60);
        System.out.println(horas + "hora(s)");

        int minutos = resto / 60;
        resto = resto % 60;
        System.out.println(minutos + "minuto(s)");

        int segundos = resto;
        System.out.println(segundos + "segundo(s)");

    }
}