
import java.util.Scanner;

public class AvtoBus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            long n = sc.nextLong();
            if((n%4!=2 && n%4!=0) || n==2){
                System.out.println(-1);
                continue;
            }
            // if(n%4==0 || n%6==0){
            //     if(n/6==0){
            //         System.out.println((n/4)+" "+(n/4));
            //     } else{
            //         System.out.println((n/6)+" "+(n/4));
            //     } 
            // } else{
            //     System.out.println(-1);
            // }
            if(n%6==0){
                System.out.print(n/6);
            } else{
                System.out.print(((n/6)+1));
            }
            if(n%4==0){
                System.out.println(" "+(n/4));
            } else{
                System.out.println(" "+(n/4));
            }
        }
    }
}
