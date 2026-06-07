
import java.util.Scanner;

public class ABBalance {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            String s = sc.next();
            int len = s.length();
            // int ab = 0, ba = 0;
            // String sub = "ab";
            // String[] parts = s.split(sub, -1);
            // ab = parts.length - 1;
            // sub = "ba";
            // parts = s.split(sub, -1);
            // ba = parts.length-1;
            // int a = 0, b = 0;
            // for (int i = 0; i < len; i++) {
            //     if(s.charAt(i)=='a'){
            //         a++;
            //     } else{
            //         b++;
            //     }
            // }
            // if(ab==ba){
            //     System.out.println(s);
            //     continue;
            // }
            // if(ab==1 && ba==0){
            //     if(a==1){
            //         for (int i = 0; i < len; i++) {
            //         System.out.print("b");
            //         }
            //     } else{
            //         for (int i = 0; i < len; i++) {
            //         System.out.print("a");
            //         }
            //     }
            //     System.out.println();
            //     continue;
                
            // }
            // if(ba==1 && ab==0){
            //     if(a==1){
            //         for (int i = 0; i < len; i++) {
            //         System.out.print("b");
            //         }
            //     } else{
            //         for (int i = 0; i < len; i++) {
            //         System.out.print("a");
            //         }
            //     }
            //     System.out.println();
            //     continue;
                
            // }

            // // if(ab>ba){
            // //     while(ab!=ba){
                    
            // //     }
            // // }
            // StringBuilder sb = new StringBuilder(s);
            // if(ab>ba){
            //     for (int i = 0; i < len-2; i++) {
            //         if(s.charAt(i)=='a' && s.charAt(i+1)=='b' && s.charAt(i+2)=='b'){
            //             sb.setCharAt(i, 'b');
            //             ab--;
            //             if(ab==ba){
            //                 break;
            //             }
            //         }
            //     }
            // }
            
            // if(ba>ab){
            //     for (int i = 0; i < len-2; i++) {
            //         if(s.charAt(i)=='b' && s.charAt(i+1)=='a' && s.charAt(i+2)=='a'){
            //             sb.setCharAt(i, 'a');
            //             ba--;
            //             if(ab==ba){
            //                 break;
            //             }
            //         }
            //     }
            // }

            // s = sb.toString();
            // System.out.println(s);
            if(s.charAt(0)==s.charAt(len-1)){
                System.out.println(s);
            } else {
                char newChar = (s.charAt(0) == 'a') ? 'b' : 'a';
                s = newChar + s.substring(1);
                System.out.println(s);
            }

        }
    }
}
