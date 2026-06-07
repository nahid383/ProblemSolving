import java.util.Scanner;

public class UnnaturalLanguageProcessing {
    static boolean isVowel(char c) {
        return c == 'a' || c == 'e';
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            String s = sc.next();

            if (n == 0)
                continue;
            System.out.print(s.charAt(0));
            if (n > 1)
                System.out.print(s.charAt(1));

            int i = 2;
            while (i < n) {
                if (i + 1 < n) {
                    if (i + 2 < n && !isVowel(s.charAt(i + 1))) {
                        System.out.print(s.charAt(i) + "." + s.charAt(i + 1) + s.charAt(i + 2));
                        i += 3;
                    } else {
                        System.out.print("." + s.charAt(i) + s.charAt(i + 1));
                        i += 2;
                    }
                } else {
                    System.out.print(s.charAt(i));
                    i++;
                }
            }
            // for (int i = 0; i < n; ) {
            // nes+=s.charAt(i);
            // if(i+1<n) nes+=s.charAt(i+1);
            // if(i+2<n && !isVowel(s.charAt(i+2))){
            // nes+=s.charAt(i+2);
            // i=i+3;
            // } else{
            // i=i+2;
            // }
            // st.add(nes);
            // nes="";
            // }

            // for (int i = 0; i < st.size(); i++) {
            // if(i==st.size()-1){
            // System.out.println(st.get(i)+"");
            // } else{
            // System.out.print(st.get(i)+".");
            // }

            // }

            System.out.println();
        }
    }
}
