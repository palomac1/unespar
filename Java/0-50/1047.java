import java.io.IOException;
import java.util.Scanner; 

public class 1047{
    public static void main(String[] args) throws IOException{
        Scanner s = new Scanner(System.in);
        int hInicial = s.nextInt();
        int hFinal = s.nextInt();
        int hFim = s.nextInt();
		int mFim = s.nextInt();
		int totalH = hFim - hInicio;
		int totalM = mFim - mInicio;
		
		if (totalH < 0) {
			totalH = 24 + (hFim - hInicio);
		}
         if (totalM < 0) {
			totalM = 60 + (mFim - mInicio);
			totalH = totalH -1;
		}
         if (hInicio == hFim && mInicio == mFim) System.out.println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
         else System.out.println("O JOGO DUROU "+ totalH + " HORA(S) E " + totalM + " MINUTO(S)");
    }

}
    