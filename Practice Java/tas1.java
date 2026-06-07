
import java.util.Scanner;

public class tas1 {

    static int deposit(int balance, int amount){
        return balance+amount;
    } 
    static int withdraw(int balance, int amount){
        if(balance<amount){
            System.out.println("Insufficient Balance");
            return -1;
        } 
        return balance-amount;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int balance01 = sc.nextInt(); //wallet1
        int balance02 = sc.nextInt(); //wallet2
        System.err.println("1 means deposit and 0 means withdraw. Enter any?");

        int query = sc.nextInt();
        if(query==1){
            balance01 = deposit(balance01, 800);
            balance02 = deposit(balance02, 900);
        } else{
            balance01 = withdraw(balance01, 1200);
            balance02 = withdraw(balance02, 300);
        }

        System.out.println("Final Balance on wallet 1 : "+ balance01);
        System.out.println("Final Balance on wallet 2 : "+ balance02);
    }
}
