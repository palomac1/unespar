import java.io.IOException;
import java.util.Scanner;

public class 1073 {
	public static void main(String[] args) throws IOException {
    	Scanner s = new Scanner(System.in);
    	int N = s.nextInt();
    	for (int i = 1; i <= N; i++) {
    		if (i % 2 == 0) System.out.println(i + "^2 = " + (i * i));
    	}
	}
	
}