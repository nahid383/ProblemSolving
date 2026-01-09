
import java.util.Arrays;
import java.util.Scanner;

public class Discounts {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            long arr[] = new long[n];
            long vouchers[] = new long[k];
            long aSum = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextLong();
                aSum += arr[i];
            }
            long kSum = 0;
            for (int i = 0; i < k; i++) {
                vouchers[i] = sc.nextLong();
                kSum += vouchers[i];
            }

            Arrays.sort(arr);
            Arrays.sort(vouchers);

            // if(n>kSum){
            //     System.out.println(aSum - (arr[n-kSum]));
            //     continue;
            // }
            long cost = 0;
            // int idx = 0;
            // for (int i = n-1; i >= 0; i--) {
            //     
            //     for (int j = 0; j < vouchers[idx]; j++) {
            //         if(!voucherApplied){
            //             voucherApplied=true;
            //         } else{

            //         }
            //     }
            // }
            int idx = n;
            // for (int i = k-1; i >= 0 && idx >= 0; i--) {
            //     int v = vouchers[i];
            //     idx--;
                
            //     // boolean voucherApplied = false;
            //     for (int j = 1; j < v && idx>=0; j--) {
            //         // if(!voucherApplied){
            //         //     voucherApplied=true;
            //         // } else{
            //         //     cost += arr[j];
            //         // }
            //         cost+=arr[idx];
            //         idx--;
            //     }
            //     // idx = idx - vouchers[i];
            //     // if(idx<0){
            //     //     break;
            //     // }
            // }
            for(int i=0; i<k; i++){
                if(idx>=vouchers[i]){
                    idx -= vouchers[i];
                    aSum-=arr[idx];
                } else{
                    break;
                }
            }

            
            System.out.println(aSum);
            
        }
    }
}
