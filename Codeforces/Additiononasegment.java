
import java.util.Arrays;
import java.util.Scanner;

public class Additiononasegment {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0){
            int n = sc.nextInt();
            long[] arr = new long[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
            }

            Arrays.sort(arr);
            long sum=0;
            long cnt=0;
            for (int i = 0; i < n; i++) {
                if(arr[i]>0){
                    sum+=arr[i];
                    cnt++;
                }
            }

            long res = Math.min(cnt, sum-n+1);
            System.out.println(res);
        }
    }
}
