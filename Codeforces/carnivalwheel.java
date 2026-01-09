
import java.util.Scanner;

public class carnivalwheel{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int l = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();
            int cnt = a%l;
            for (int i = 0; i <= l-1; i++) {
                cnt = Math.max(cnt, (a + i*b %l)%l);
            }

            System.out.println(cnt);
        }
    }
}