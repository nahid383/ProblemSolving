
import java.util.Scanner;

public class XORarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int l = sc.nextInt();
            int r = sc.nextInt();
            int[] vec = new int[n+1];
            vec[0] = 0;
            int num = 1048576;
            long xorSum = 0;
            for (int i = 1; i <=n; i++) {
                vec[i] = i;
                // num=num+idx;
                // idx++;
                if(i==r){
                    vec[i] = vec[l-1];
                }
            }

            // if((r-l+1)%2==1){
            int[] arr = new int[n];
            // }

            for (int i = 1; i <= n; i++) {
                arr[i-1] = vec[i] ^ vec[i-1];
            }

            for (int i = 0; i < n; i++) {
             System.out.print(arr[i] + " ");   
            }
            System.out.println();
        }
    }
}
