
import java.util.Scanner;

public class LawnMower {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int w = sc.nextInt();
            int cnt = 0;
            // while(n-->0){
            //     if(w>n){
            //         cnt+=n;
            //     } else{
            //         cnt+=(w);
            //     }

            //     n = n-w;
            // }
            // if(w==1){
            //     cnt=0;
            // }
            cnt = n - (n/w);

            System.out.println(cnt);
        }
    }
}
