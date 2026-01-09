import java.util.Scanner;

public class DZYsequences {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        boolean isSmall = false;
        if(n<=2){
            System.out.println(n);
            return;
        }

        int[] l = new int[n];
        int[] r = new int[n];
        l[0] = 1;
        r[n-1] = 1;

        for (int i = 1; i < n; i++) {
            if(arr[i] > arr[i-1]){
                l[i] = l[i-1] + 1;
            } else{
                l[i] = 1;
            } 
        }

        for (int i = n-2; i >= 0; i--) {
            if(arr[i] < arr[i+1]){
                r[i] = r[i+1] + 1;
            } else{
                r[i] = 1;
            } 
        }

        int ans = 1;

        for (int i = 0; i < n; i++) {
            ans = Math.max(ans, l[i]);
            ans = Math.max(ans, r[i]);
        }

        for (int i = 1; i < n-1; i++) {
            if(arr[i-1] < arr[i+1]-1){
                ans = Math.max(ans, l[i-1] + r[i+1] + 1);
            }
        }

        for (int i = 1; i < n; i++) {
            ans = Math.max(ans, l[i-1]+1);
        } 
        for (int i = 0; i < n-1; i++) {
            ans = Math.max(ans, r[i+1]+1);
        }

        System.out.println(ans);
    }
}
