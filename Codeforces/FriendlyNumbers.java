
import java.util.Scanner;

public class FriendlyNumbers {
    static int digitSum(long n){
        int sum =0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            long x = sc.nextLong();
            long count = 0;
            // if(x%9==0 && x!=0 && x!=90 && x!=900 && x!=9000 && x!=189 && x!=288 && x!=387 && x!=486){
            //     System.out.println(10);
            // } else{
                for(long y = x; y <= x + 81; y++){
                    if(y - digitSum(y) == x){
                    count++;
                    }
                }
                System.out.println(count);
            // }
        }
    }
}
