import java.util.Scanner;

public class Lightsout {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[10];
        for (int i = 1; i <= 9; i++){
            a[i] = sc.nextInt();
        }
        int[] b = new int[10];
        for (int i = 1; i <= 9; i++){
            b[i] = 1;
        }
        for (int i = 1; i <= 9; i++){
            if(a[i] % 2 != 0){
                b[i] = 1 - b[i];
                if(i==1){
                    b[2] = 1 - b[2];
                    b[4] = 1 - b[4];
                } else if(i==2){
                    b[1] = 1 - b[1];
                    b[3] = 1 - b[3];
                    b[5] = 1 - b[5];
                } else if(i==3){
                    b[2] = 1 - b[2];
                    b[6] = 1 - b[6];
                } else if(i==4){
                    b[1] = 1 - b[1];
                    b[5] = 1 - b[5];
                    b[7] = 1 - b[7];
                } else if(i==5){
                    b[2] = 1 - b[2];
                    b[4] = 1 - b[4];
                    b[6] = 1 - b[6];
                    b[8] = 1 - b[8];
                } else if(i==6){
                    b[3] = 1 - b[3];
                    b[5] = 1 - b[5];
                    b[9] = 1 - b[9];
                } else if(i==7){
                    b[4] = 1 - b[4];
                    b[8] = 1 - b[8];
                } else if(i==8){
                    b[5] = 1 - b[5];
                    b[7] = 1 - b[7];
                    b[9] = 1 - b[9];
                } else if(i==9){
                    b[6] = 1 - b[6];
                    b[8] = 1 - b[8];
                }
            }
        }
        System.out.println(b[1] + "" + b[2] + "" + b[3]);
        System.out.println(b[4] + "" + b[5] + "" + b[6]);
        System.out.println(b[7] + "" + b[8] + "" + b[9]);
    }
}
