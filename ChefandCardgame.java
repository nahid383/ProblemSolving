
import java.util.Scanner;

public class ChefandCardgame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];
            int b[] = new int[n];
            int chef=0;
            int morty=0;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                b[i] = sc.nextInt();
                int points1=0;
                int points2=0;
                while(a[i]>0){
                    int rem=a[i]%10;
                    points1+=rem;
                    a[i]=a[i]/10;

                }
                while(b[i]>0){
                    int rem = b[i]%10;
                    points2+=rem;
                    b[i] = b[i]/10;
                }
                if(points1>points2){
                    chef++;
                } else if(points2>points1){
                    morty++;
                } else{
                    chef++;
                    morty++;
                }
            }

            if(chef>morty){
                System.out.println("0 " + chef);

            } else if(morty>chef){
                System.out.println("1 " + morty);
            } else{
                System.out.println("2 " + chef);
            }
        }
    }
}
