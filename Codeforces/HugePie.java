
import java.util.Scanner;

public class HugePie {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int cnt= 0;
            boolean isPossible = false;
            if(k>n){
                System.out.println("-1");
                continue;
            }
            if(k==n){
                System.out.println("0");
                continue;
            }

            while(n>k){
                cnt++;
                // int a=-1;
                // int b=-1;
                // if(n%2==0){
                //     n = n/2;
                // } else{
                //     n = (n+1)/2;
                //     a = n;
                //     b = n-1;
                // }
                // cnt++;
                // if(n==k || k==a || k==b){
                //     isPossible = true;
                //     break;
                // }
                if(n/2==k || (n+1)/2==k){
                    n=k;
                    break;
                }
                if((n/2)%2==0){
                    n=(n+1)/2;
                } else{
                    n=n/2;
                }
            }

            if(n==k){
                System.out.println(cnt);
            } else{
                System.out.println("-1");
            }
        }
    }
}
