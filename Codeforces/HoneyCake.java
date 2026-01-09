
import java.util.Scanner;

public class HoneyCake {
    public static long gcd(long a, long b) {
        
        while(b!=0){
            long temp = b;
            b = a%b;
            a=temp;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long w = sc.nextLong();
        long h = sc.nextLong();
        long d = sc.nextLong();
        long n = sc.nextLong();

        long n1 = n;
        long g1 = gcd(n, w);
        n = n/g1;
        long g2 = gcd(n, h);
        n = n/g2;
        long g3 = gcd(n, d);
        n = n/g3;

        if(g1*g2*g3==n1){
            System.out.println((g1-1) + " " + (g2-1) + " " + (g3-1));

        } else{
            System.out.println(-1);
        }
    }
}
