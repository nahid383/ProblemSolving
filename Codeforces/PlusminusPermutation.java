
import java.util.Scanner;

public class PlusminusPermutation {
    // static boolean used(boolean[] filled, int idx){
    //     return filled[idx];
    // }
    static long lcm(long a, long b){
        return a/gcd(a, b)*b;
    }

    static long gcd(long a, long b){
        while(b!=0){
            long tmp = a%b;
            a = b;
            b = tmp;
        }
        return a;
    }
    // static long sum(long k){
    //     return k*(k+1)/2;
    // }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n= sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            long cx = n/x;
            long cy = n/y;
            long cxy = n/lcm(x, y);
            cx -= cxy;
            cy -= cxy;


            long sumx = (2*cx*n - cx*cx+cx)/2;
            long sumy = (cy*(cy+1))/2;
            // long sumc = sum(cxy);
            long max = sumx - sumy;
            // int[] a = new int[n];
            // boolean[] filled = new boolean[n];
            // int num = n;
            // for (int i = 1; i <= n; i++) {
            //     if(i%x==0){
            //         int idx = i-1;
            //         if(!used(filled, idx)){
            //         a[idx] = num;
            //         filled[idx] = true;
            //         num--;
            //         }
            //     }
                
            // }
            // for (int i = 1; i <= n; i++) {
            //     if(i%y==0){
            //         int idx = i-1;
            //         if(!used(filled, idx)){
            //         a[idx] = num;
            //         filled[idx] = true;
            //         num--;
            //         }
            //     }
                
            // }
            // for (int i = 1; i <= n; i++) {

            //         int idx = i-1;
            //         if(!used(filled, idx)){
            //         a[idx] = num;
            //         filled[idx] = true;
            //         num--;
            //         }
                
            // }
            // for (int i = 0; i < n; i++) {
            //     if((i+1)%x==0){
            //         sumx+=a[i];
            //     }
            //     if((i+1)%y==0){
            //         sumy+=a[i];
            //     }
            // }

            System.out.println(max);

        }
        
    }
}
