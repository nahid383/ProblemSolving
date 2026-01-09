
import java.util.Scanner;

public class coinFlip {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int g = sc.nextInt();
            while(g-->0){
                int n = sc.nextInt();
                int i = sc.nextInt();
                int q = sc.nextInt();
                if(n==q){
                    System.out.println(i/2);
                } else{
                    System.out.println((i+1)/2);
                }
            }
        }
    }
}
