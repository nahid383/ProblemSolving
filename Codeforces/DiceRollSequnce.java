import java.util.Scanner;

public class DiceRollSequnce {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            int[] d = new int[6];
            for (int i = 0; i < 6; i++) {
                if (a[0] == i + 1) {
                    d[i] = 0;
                } else {
                    d[i] = 1;
                }
            }

            for (int i = 1; i < n; i++) {
                int[] p = new int[6];

                for (int j = 0; j < 6; j++) {
                    p[j] = 1000000000;
                }
                for (int j = 0; j < 6; j++) {
                    int cost;
                    if (a[i] == j + 1) {
                        cost = 0;
                    } else {
                        cost = 1;
                    }
                for (int k = 0; k < 6; k++) {
                    if (j != k && j + k != 5) {
                        p[j] = Math.min(p[j], d[k] + cost);
                    }
                }
            }

                d =p;
            }

            int min = 1000000000;
            for (int i = 0; i < 6; i++) {
                min = Math.min(min, d[i]);
            }

            System.out.println(min);
        }
    }
}