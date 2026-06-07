
import java.util.Scanner;

public class SuminBinaryTree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0){
            long n = sc.nextLong();
            long sum=0;
            while(n>0){
                sum+=n;
                n=n/2;
            }

            System.out.println(sum);

        }
    }
}
