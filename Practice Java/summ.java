
import java.util.Scanner;

public class summ {
    public static void main(String[] args) {
        System.out.println("(Enter any two numbers: )");
        Scanner sc = new Scanner(System.in);
        int a , b;
        a = sc.nextInt();
        b = sc.nextInt();

        System.out.println("Summation is: " + (a+b));
    }
}
