
import java.util.Arrays;
import java.util.Scanner;

public class ShiftedMex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            Arrays.sort(arr);
            int temp=0, res=0;
            for (int i = 0; i < n; i++) {
                if(temp==0){
                    temp++;
                } else if(arr[i]==arr[i-1]+1){
                    temp++;
                } else if(arr[i]!=arr[i-1]){
                    res = Math.max(temp, res);
                    temp=1;
                }
            }

            res = Math.max(res, temp);

            System.out.println(res);
        }
    }
}
