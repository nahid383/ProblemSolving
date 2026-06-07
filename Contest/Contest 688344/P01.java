
import java.util.Scanner;

public class P01{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int a,b;
            a = sc.nextInt();
            b = sc.nextInt();
            int cnt=0;
            for (int i = a; i <= b; i++) {
                if(i%2==0){
                    cnt++;
                }
            }

            System.out.println(cnt);
        }
    }
}