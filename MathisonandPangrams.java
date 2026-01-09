
import java.util.Arrays;
import java.util.Scanner;

public class MathisonandPangrams {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n[] = new int[26];
            for (int i = 0; i < 26; i++) {
                n[i] = sc.nextInt();
            }
            String s = sc.next();
            char[] ch = s.toCharArray();
            Arrays.sort(ch);
            int len = s.length();
            int cnt=0;
            boolean[] present = new boolean[26];
            for (int i = 0; i < len; i++) {
                present[s.charAt(i)-'a']=true;
            }
            for (int i = 0; i < 26; i++) {
                if(!present[i]){
                    cnt+=n[i];
                }
            }
            System.out.println(cnt);
        }
    }
}
