
import java.util.Arrays;
import java.util.Scanner;

public class Chipsontheboard {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            long a[] = new long[n];
            long b[] = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextLong();
            }
            long mina = Arrays.stream(a).min().getAsLong();
            long minb = Arrays.stream(b).min().getAsLong();
            long cost1=0;
            long cost2=0;
            for (int i = 0; i < n; i++) {
                cost1+=(minb+a[i]);
            }
            for (int i = 0; i < n; i++) {
                cost2+=(mina+b[i]);
            }
            long res = Math.min(cost1, cost2);
            System.out.println(res);
        }
    }
}
