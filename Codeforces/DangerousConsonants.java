
import java.util.Scanner;

public class DangerousConsonants {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        String s1 = "";
        for (int i = 0; i < n; i++) {
            if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u'){
                s1 += s.charAt(i);
            }


        }

        if(s1.isEmpty()){
            System.out.println("SWE-21");
        } else{
            System.out.println(s1);
        }
    }
}
