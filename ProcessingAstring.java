
import java.util.Scanner;

public class ProcessingAstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            String s = sc.next();
            int len = s.length();
            int cnt = 0;
            for (int i = 0; i < len; i++) {
                if(s.charAt(i)>='a' && s.charAt(i)<='z'){

                } else{
                    int num = s.charAt(i)-'0';
                    cnt = cnt+num;
                }
            }
            System.out.println(cnt);
        }

    }
}
