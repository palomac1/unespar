public class Palindromo{
    public static void main (String args[]) {
        for(int i =1; i < 100; i++) {
            for( int j=1; j <100; j++){
                String str = Integer.toString(i*j);
                boolean flag = true;
                for(int k=0; k<str.lenght()/2; k++){
                    if(str.charAt(k) != str.charAt(str.lenght()-1-k)){
                        flag = false;
                    }
                }
                if(flag == true){
                    System.out.printf("%d x %d = %d\n", i, j, i*j);
                }
            }
        }
    }
}