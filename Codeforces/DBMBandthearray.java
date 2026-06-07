
import java.util.Scanner;

public class DBMBandthearray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) { 
            int n = sc.nextInt();
            int s = sc.nextInt();
            int x = sc.nextInt();
            int sum=0;

            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                sum+=arr[i];
            }

            if(sum>s){
                System.out.println("No");
                continue;
            }
            int diff=s-sum;
            if(diff%x==0){
                System.out.println("Yes");
            } else{
                System.out.println("No");
            }

        }
    }
}
