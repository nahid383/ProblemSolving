
import java.util.Scanner;

public class FillingShapes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        if(t%2!=0){
            System.out.println(0);
            // return;
        } else{
            System.out.println((long)Math.pow(2, t/2));
            // return;
        }
        // if(t%2==0){
        //     System.out.println(t);
        // } else{
        //     System.out.println(0);
        // }
    }
}
