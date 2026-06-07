
import java.util.Scanner;

public class PrefixMax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int maxi = 0;
            int b;
            for (int i = 0; i < n; i++) {
                b = sc.nextInt();
                maxi = Math.max(maxi, b);
            }

            System.out.println(maxi*n);
        }
    }
}
