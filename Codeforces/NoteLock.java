
import java.util.Scanner;

public class NoteLock {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int k = sc.nextInt();

            String s = sc.next();

            int last1 = -1000000;
            int cnt = 0;

            for (int idx = 0; idx < n; idx++) {
                if(s.charAt(idx)=='1'){
                    if(idx-last1>=k){
                        cnt++;
                        last1 = idx;
                    } else{
                        last1 = idx;
                    }
                }
            }

            System.out.println(cnt);
        }
    }
}
