
import java.util.Scanner;

public class longestgoodArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int l = sc.nextInt();
            int r = sc.nextInt();
            int cnt = 1;
            int j = 1;
            if(l==r){
                System.out.println("1");
                continue;
            }
            for (int i = l; i < r; i=i+j) {
                cnt++;
                j=j+1;
            }
            System.out.println(cnt);
        }
    }
}
