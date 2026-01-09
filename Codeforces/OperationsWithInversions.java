
import java.util.Scanner;

public class OperationsWithInversions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int count = 0;
            int maxi = 0;
            for (int i = 0; i < n; i++) {
                if(arr[i]>maxi){
                    maxi = arr[i];
                }
                if(arr[i]<maxi){
                    count++;
                }
            }

            System.out.println(count);
        }
    }
}
