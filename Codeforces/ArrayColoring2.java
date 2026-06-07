
import java.util.Scanner;

public class ArrayColoring2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean isPossible = false;
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            for (int i = 0; i < n-1; i++) {
                if(arr[i]%2==arr[i+1]%2){
                    isPossible = true;
                    break;
                }
            }
            if(isPossible){
                System.out.println("No");
            } else{
                System.out.println("YEs");
            }

        }
    }
}