
import java.util.Scanner;

public class FitinDataType {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int x = sc.nextInt();
            if(x<=n){
                System.out.println(x);
            } else{
                System.out.println(x%(n+1));
            }
        }
    }
}
