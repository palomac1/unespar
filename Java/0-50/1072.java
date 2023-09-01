import java.io.IOException;
import java.util.Scanner;

public class 1072 {
    
	public static void main(String[] args) throws IOException {
    	Scanner s = new Scanner(System.in);
    	int N = s.nextInt();
    	int in = 0;
    	int out = 0;
    	for (int i = 0; i < N; i++) {
    		int x = s.nextInt();
    		if (x >= 10 && x <= 20) in++;
    		else out++;
    	}
    	System.out.println(in + " in");
    	System.out.println(out + " out");
    }
	
}