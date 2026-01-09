
import java.util.Scanner;

public class NewYearCake {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            boolean white = true;
            boolean black = true;
            int cnt1=0;
            int x = a;
            int y=b;
            for (int i = 1; ; i=i*2) {
                if(cnt1%2==0){
                    if(x-i>=0){
                        x=x-i;
                        cnt1++;
                    } else break;
                } else{
                    if(y-i>=0){
                        y-=i;
                        cnt1++;
                    } else break;
                }
                
            }
            // x=b;
            // for (int i = 2; i <= b; i=i+2) {
            //     if(x-i>=0){
            //         x=x-i;
            //         cnt1++;
            //     }
            // }
            int cnt2=0;
            x=a;
            y=b;
            for (int i = 1; ; i=i*2) {
                if(cnt2%2==0){
                    if(y-i>=0){
                        y=y-i;
                        cnt2++;

                    } else break;
                } else{
                    if(x-i>=0){
                        x=x-i;
                        cnt2++;
                    } else break;
                }
                // if(x-i>=0){
                //     x=x-i;
                //     cnt2++;
                // }
            }
            // x=b;
            // for (int i = 2; i <= a; i=i+2) {
            //     if(x-i>=0){
            //         x=x-i;
            //         cnt2++;
            //     }
            // }

            int res = Math.max(cnt1, cnt2);
            System.out.println(res);
            
        }
    }
}
