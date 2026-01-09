
import java.util.Scanner;

public class BinaryarrayGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];
            int cnt0=0;
            int cnt1=0;
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if(i==0 || arr[i]!=arr[i-1]){
                    cnt0 += (arr[i]==1?1:-1);
                } else{
                    cnt1++;
                }
            }

            if(cnt0>=0){
                System.out.println("Alice");
            } else{
                System.out.println("Bob");
            }
        }
    }
}
