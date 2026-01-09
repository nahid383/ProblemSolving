
import java.util.Scanner;

public class LittleFairyPainting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] freq = new int[100001];
            int mini = Integer.MAX_VALUE;
            int[] arr = new int[n];
            for (int idx = 0; idx < n; idx++) {
                arr[idx] = sc.nextInt();
                mini = Math.min(arr[idx], mini);
                if(arr[idx]<=100000){
                    freq[arr[idx]] = 1;
                }
            }

            int start = 0;

            for (int idx = 0; idx < 100000; idx++) {
                if(freq[idx]==1){
                    start++;
                }
            }

            int ans = 0;
            for (int idx = start; idx < 100000; idx++) {
                if(freq[idx]==1){
                    ans=idx;
                    break;
                }
            }

            System.out.println(ans);            
        }

    }
    
}
