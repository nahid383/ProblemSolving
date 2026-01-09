
import java.util.Scanner;

public class NewYearString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            String s = sc.next();
            boolean is5 = false;
            boolean is6 = false;
            for (int i = 0; i < n-3; i++) {
                if(s.charAt(i)=='2' && s.charAt(i+1)=='0' && s.charAt(i+2)=='2' && s.charAt(i+3)=='5'){
                    is5 = true;
                }
                if(s.charAt(i)=='2' && s.charAt(i+1)=='0' && s.charAt(i+2)=='2' && s.charAt(i+3)=='6'){
                    is6 = true;
                }
                // } else if(s.charAt(i)=='6'){
                //     is6 = true;
                // }
            }
            if(is6){
                System.out.println(0);
                continue;
            }
            if(is5){
                System.out.println(1);
            } else{
                System.out.println(0);
            }
        }
    }
}
