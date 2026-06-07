
import java.util.Scanner;

public class  Quests{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            int res = 0;
            int suma = 0;
            int maxb = 0;
            for (int i = 0; i < Math.min(n,k); i++) {
                suma+=a[i];
                maxb=Math.max(maxb, b[i]);

                int rem = k-(i+1);
                int cur = suma+(rem*maxb);
                res = Math.max(res, cur);
            }

            System.out.println(res);
        }
    }
}