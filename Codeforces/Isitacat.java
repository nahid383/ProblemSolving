
import java.util.Scanner;

public class Isitacat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            String s = sc.next();
            boolean isCat = true;
            // for (int i = 0; i < n; i++) {
            //     if(s.charAt(i)=='m' || s.charAt(i)=='M' ||
            //     s.charAt(i)=='e' || s.charAt(i)=='E' || s.charAt(i)=='o' ||
            //     s.charAt(i)=='O' || s.charAt(i)=='w' || s.charAt(i)=='W'){

            //     } else{
            //         isCat = false;
            //     }
            // }
            // for (int i = 0; i < n-1; i++) {
            //     if(s.charAt(i)=='m' || s.charAt(i)=='M'){
            //         if(s.charAt(i+1)=='e' || s.charAt(i+1)=='E' || s.charAt(i+1)=='m' || s.charAt(i+1)=='M'){
                        
            //         } else{
            //             isCat=false;
            //         }
            //     } else if(s.charAt(i)=='e' || s.charAt(i)=='E'){
            //         if(s.charAt(i+1)=='o' || s.charAt(i+1)=='O' || s.charAt(i+1)=='e' || s.charAt(i+1)=='E'){
                        
            //         } else{
            //             isCat=false;
            //         }
            //     } else if(s.charAt(i)=='o' || s.charAt(i)=='O'){
            //         if(s.charAt(i+1)=='w' || s.charAt(i+1)=='W' || s.charAt(i+1)=='o' || s.charAt(i+1)=='O'){
                        
            //         } else{
            //             isCat=false;
            //         }
            //     } else if(s.charAt(i)=='w' || s.charAt(i)=='W'){
            //         if(s.charAt(i+1)=='w' || s.charAt(i+1)=='W'){
                        
            //         } else{
            //             isCat = false;
            //         }
            //     }
            //      else{
            //         isCat=false;
            //     }
            // }
            // if(s.charAt(n-1)=='m' || s.charAt(n-1)=='M' ||
            // s.charAt(n-1)=='e' || s.charAt(n-1)=='E' || s.charAt(n-1)=='o' ||
            // s.charAt(n-1)=='O' || s.charAt(n-1)=='w' || s.charAt(n-1)=='W'){
                
            // } else{
            //     isCat = false;
            // }

            s=s.toLowerCase();
            StringBuilder comp = new StringBuilder();
            comp.append(s.charAt(0));
            for (int i = 1; i < n; i++) {
                if(s.charAt(i)!=s.charAt(i-1)){
                    comp.append(s.charAt(i));
                }
            }

            if(comp.toString().equals("meow")){
                isCat=true;
            } else{
                isCat=false;
            }

            if(!isCat){
                System.out.println("NO");
            } else{
                System.out.println("YES");
            }
        }
    }
}
