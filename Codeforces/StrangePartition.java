
import java.util.Scanner;

public class StrangePartition {
    public static void main(String[] args) {
        Scanner sc = new  Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            long sum1 = 0;
            for (int i = 0; i < n; i++) {
                long num = a[i] + k - 1;
                sum1 += (num/k);
            }
            long summ = 0;
            for (int i = 0; i < n; i++) {
                summ+=a[i];
            }

            summ = (summ + k - 1);

            long sum2 = summ/k;

            if(sum1>sum2){
                System.out.println(sum2 + " " + sum1);
            } else{
                System.out.println(sum1+" "+sum2);
            }
        }
    }
}
