
import java.util.Scanner;

public class PashmikandGarden {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();

        if(x1==x2){
            int side = Math.abs(y1-y2);
            int x3 = x1+side;
            int y3 = y1;
            int x4 = x2+side;
            int y4 = y2;

            System.out.println(x3+" "+y3+" "+x4+" "+y4);
        } else if(y1==y2){
            int side = Math.abs(x1-x2);
            int x3 = x1;
            int y3 = y1 + side;
            int x4 = x2;
            int y4 = y2+side;
            System.out.println(x3+" "+y3+" "+x4+" "+y4);

        } else{
            int dx = Math.abs(x1-x2);
            int dy = Math.abs(y1-y2);
            if(dx!=dy){
                System.out.println(-1);
            } else{
                System.out.println(x1+" "+y2+" "+x2+" "+y1);
            }
        }
    }
}
