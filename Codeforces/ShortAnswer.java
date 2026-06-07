
import java.util.Scanner;

public class ShortAnswer{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();

        double rec = Math.sqrt((a*a)+(b*b)+(c*c));


        System.out.printf("%.10f\n", rec);
    }
}