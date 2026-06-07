
import java.util.Scanner;

public class HourGlass {
    public static void main(String[] args) {
        Scanner sc = new  Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int s = sc.nextInt();
            int k = sc.nextInt();
            int m = sc.nextInt();

            if(s<=k){
                int y = m%k;
                System.out.println(Math.max(0, s-y));
            } else{
                int x = m/k; 
                int z = s;
                if(x%2==1){
                    z=k;
                }
                System.out.println(z-(m%k));
            }
        }
    }
}
