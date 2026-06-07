
import java.util.Scanner;

public class DivisiblePermutation{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int st = (n+1)/2;
            int st1 = st+1;
            for (int i = st; i >= 1; i--) {
                System.out.println(i+" "+st1+" ");
                st1++;
            }


        }
    }
}