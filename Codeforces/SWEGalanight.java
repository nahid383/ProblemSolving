
import java.util.Scanner;

public class SWEGalanight {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] a = new long[n];
        long[] b = new long[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();

        }
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextLong();

        }

        long waiting = 0;
        long extra = 0;

        for (int i = 0; i < n; i++) {
            if(a[i]>b[i]){
                waiting+=(a[i]-b[i]);
            } else{
                extra+=(b[i]-a[i]);
            }
        }

        long res1;
        long res2;

        if(extra>=waiting){
            res1= waiting;
            res2=0;
        } else{
            res1=extra;
            res2=waiting-extra;
        }

        System.out.println(res1+" "+res2);
    }
}
