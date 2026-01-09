
import java.util.Scanner;

public class EasyMath {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int maxSum = 0;
            for (int i = 0; i < n; i++) {
                int product=0;
                for (int j = 0; j < n; j++) {
                    if(i==j){
                        continue;
                    } 
                    product = arr[i]*arr[j];
                    int sum = 0 ;
                    while(product>0){
                        sum += product%10;
                        product /= 10;
                    }
                    maxSum = Math.max(maxSum, sum);

                }
            }

            System.out.println(maxSum);
        }
    }
}
