
import java.util.Scanner;

public class ModularExponentiation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long res = (long) Math.pow(2, n);
        long result = m%res;
        System.out.println(result);        

    }
}
