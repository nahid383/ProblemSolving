import java.util.Scanner;

public class Offshores {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long x = sc.nextLong();
            long y = sc.nextLong();

            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextLong();
            }

            long[] contribution = new long[n];
            long totalContribution = 0;
            for (int i = 0; i < n; i++) {
                contribution[i] = (a[i] / x) * y;
                totalContribution += contribution[i];
            }

            long ans = 0;
            for (int i = 0; i < n; i++) {
                long totalMoney = totalContribution + a[i] - contribution[i];
                if (totalMoney > ans) {
                    ans = totalMoney;
                }
            }

            System.out.println(ans);
        }
    }
}
