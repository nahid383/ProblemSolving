import java.math.BigInteger;
import java.util.Scanner;

public class Iboredwithlife{
    static long factorial(long n){
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact*i;
        }
        return fact;
    }
    public static void main(String[] args){
        Scanner sc = new  Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();

        long gcd = factorial(Math.min(a,b));

        System.out.println(gcd);
    }
}