
import java.util.Scanner;

public class Heapify1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] a = new int[n];
            boolean isPossible = true;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                int x = i+1;
                while(x%2==0){
                    x=x/2;
                }
                int y = a[i];
                while(y%2==0){
                    y=y/2;
                }
                if(x!=y){
                    isPossible=false;
                }
            }

            if(isPossible){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
        }
    }
}
