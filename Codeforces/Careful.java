
import java.util.Scanner;

public class Careful {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();

        if(a>c/b){
            System.out.println("Yes");
        } else{
            System.out.println("No");
        }
    }
}
