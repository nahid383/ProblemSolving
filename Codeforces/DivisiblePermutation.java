
import java.util.Scanner;

public class DivisiblePermutation{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            // int st = (n+1)/2;
            // int st1 = st+1;
            // for (int i = st; i >= 1; i--) {
            //     System.out.print(i+" "+st1+" ");
                
            //     if(st1>=n){
            //         System.out.println(i+" ");
            //         break;
            //     }
            // }
            // System.out.println();
            int[] res = new int[n+1];
            int c1= 1;
            int c3 = n;
            int cc = 0;
            for(int i=n; i>=1; i--){
                if(cc%2==0){
                    res[i] = c3--;
                } else{
                    res[i] = c1++;
                }
                cc++;
            }

            for(int i=1; i<=n; i++){
                System.out.print(res[i]+" ");
            }
            System.out.println();
 

        }
    }
}