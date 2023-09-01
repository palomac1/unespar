import java.io.IOException;
import java.util.Scanner;

public class  1019 {
	
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int dseg = s.nextInt();
        int h = dseg / 3600;
        dseg -= h * 3600;
        int m = dseg / 60;
        dseg -= minutos * 60;
        int s = dseg;
        System.out.println(h + ":" + m + ":" + s);		
    }
	
}