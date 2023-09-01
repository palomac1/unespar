import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Scanner;

public class 1040 {
	
	public static void main(String[] args) throws IOException {
		Scanner s = new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.0");
		double N1 = s.nextDouble();
		double N2 = s.nextDouble();
		double N3 = s.nextDouble();
		double N4 = s.nextDouble();
        double MEDIA = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;
		System.out.println("Media: " + df.format(MEDIA));
        if (MEDIA >= 7) {
        	System.out.println("Aluno aprovado.");
        } else if (MEDIA < 7 && MEDIA >= 5) {
        	System.out.println("Aluno em exame.");
        	double NExame = s.nextDouble();
			System.out.println("Nota do exame: " + df.format(NExame));
        	MEDIA = (MEDIA + NExame) / 2;
        	if (MEDIA >= 5) {
            	System.out.println("Aluno aprovado.");
        	} else {
            	System.out.println("Aluno reprovado.");
        	}
			System.out.println("Media final: " + df.format(MEDIA));
        } else {
        	System.out.println("Aluno reprovado.");
        }
	}
	
}