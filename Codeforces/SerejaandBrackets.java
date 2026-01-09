
import java.util.Scanner;
import java.util.Stack;

public class SerejaandBrackets {
    static long RegularBracket(String s, int l, int r){
        Stack<Character> stack = new Stack<>();
        int count = 0;
        l=l-1;
        r=r-1;
        for (int i = l; i <= r; i++) {
            if(s.charAt(i)=='('){
            stack.push('(');
        } else{
            if(!stack.isEmpty()){
                stack.pop();
                count+=2;
            }
        }
        }
        stack.empty();
        return count;
    }
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int l,r;
            l = sc.nextInt();
            r = sc.nextInt();

            if(l==r){
                System.out.println("0");
                continue;
            } else if(s.charAt(l-1)== ')' && s.charAt(r-1)=='(' && r==l+1){
                System.out.println("0");
                continue;
            }

            System.out.println(RegularBracket(s, l, r));
        }
    }
    
}
