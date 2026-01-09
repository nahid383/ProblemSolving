
import java.util.Scanner;

public class EncodeandDecode {
    public static void main(String[] args) {
        Scanner sc = new  Scanner(System.in);
        String s = sc.nextLine();
        if(s.equals("first")){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            StringBuilder s1= new StringBuilder();
            for (int i = 0; i < n; i++) {
                s1.append((char)(arr[i] + 'a' - 1));
            }

            System.out.println(s1.toString());

        } else{
            String s2 = sc.nextLine();
            System.out.println(s2.length());
            for (int i = 0; i < s2.length(); i++) {
                System.out.print((s2.charAt(i)-'a'+1) + " ");

            }
            System.out.println();
        }
    }
}
