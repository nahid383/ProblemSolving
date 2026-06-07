
import java.util.Scanner;

public class Preparingfortheolympiad {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            int[] b = new int[n];
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }
            int res = 0;
        
            for (int i = 0; i < n; i++) {
                int profit;
                if(i<n-1){
                    profit = a[i] - b[i+1];
                } else{
                    profit = a[i];
                }
                if(profit>0){
                    res+=profit;
                }
            }
            System.out.println(res);

        }
    }
}
