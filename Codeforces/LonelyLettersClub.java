
import java.util.Scanner;

public class LonelyLettersClub {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String s = sc.next();
        int[] freq = new int[26];
        int[] idx = new int[26];
        boolean found = false;


        for (int i = 0; i < 26; i++) {
            idx[i] = -1;
        }

        for (int i = 0; i < n; i++) {
            int c = s.charAt(i)-'a';
            freq[c]++;
            if(idx[c] == -1){
                idx[c] = i;
            }
        }

        for (int i = 0; i < 26; i++) {
            if(freq[i] == 1){
                System.out.println((char)(i+'a')+" "+idx[i]);
                found = true;
            }
        }

        if (!found) {
            System.out.println(-1);
        }

    }
}
