
import java.util.Scanner;

public class ChefandProportion {
    public static void swap(float a, float b){
        float temp = a;
        a= b;
        b= temp;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();
        float d = sc.nextFloat();
        if(a<b){
            swap(a, b);
        }
        if(a<c){
            swap(a, c);
        }
        if(a<d){
            swap(a, d);    
        }
        if(b<c){
            swap(b, c);
        }
        if(b<d){
            swap(b,d);
        }
        if(c<d){
            swap(c, d);
        }
        if(d/c==b/a || d/b==c/a || d/a==c/b || c/d==b/a || b/d==c/a || a/d==c/b || a/b==c/d || a/c==b/d || b/c==a/d){
            System.out.println("Possible");
        } else{
            System.out.println("Impossible");
        }
    }
}
