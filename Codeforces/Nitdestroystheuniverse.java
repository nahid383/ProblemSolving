
import java.util.Scanner;

public class Nitdestroystheuniverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();

            }

            boolean all0 = true;
            for (int num : a) {
                if (num != 0) {
                    all0 = false;
                    break;
                }
            }
            if(all0){
                System.out.println(0);
            } else{
                int l = 0, r = n - 1;

                while (l < n && a[l] == 0) l++;
                while (r >= 0 && a[r] == 0) r--;

                boolean hasZeroInside = false;
                for (int i = l; i <= r; i++) {
                    if (a[i] == 0) {
                        hasZeroInside = true;
                        break;
                    }
                }

                if(hasZeroInside){
                    System.out.println(2);
                }else{
                    System.out.println(1);
                }
            }
        
        }
    }
}
