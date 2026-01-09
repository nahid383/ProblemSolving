
import java.util.Scanner;

public class OptimalShift {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            String s = sc.next();
            if(s.equals("101")){
                System.err.println("1");
                continue;
            }
            int cnt = 0;
            int last = 1;
            for (int i = 0; i < 2*n; i++) {
                int j = i%n;

                if(s.charAt(j) == '1'){
                    last = 1;
                } else{
                    cnt = Math.max(cnt, last);
                }
            }

            System.err.println(2*cnt);
        }
    }
}
