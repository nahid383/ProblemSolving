
import java.util.Scanner;

class wallet{
    private int balance;
    private final int id;
    private static int counter = 1;


    public wallet(){
        this.balance = 0;
        this.id = counter++;
    }

    public wallet(int amount){
        this.id = counter++;
        this.balance = amount;
    }

    public void deposit(int amount){
        this.balance += amount;
    }
    public void withdraw(int amount){
        this.balance -= amount;
    }

    public int finalBalance(){
        return this.balance;
    }
    public int getID(){
        return this.id;
    }
}

public class task2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter initial amount of wallet1, wallet2: ");
        int w1 = sc.nextInt();
        int w2 = sc.nextInt();
        wallet wallet1 = new wallet(w1);
        wallet wallet2 = new wallet(w2);

        wallet1.deposit(400);
        wallet1.withdraw(300);

        wallet2.deposit(500);
        wallet2.withdraw(900);

        System.out.println("id and balance on wallet1 : " +wallet1.getID() + " " + wallet1.finalBalance());
        System.out.println("id and balance on wallet2 : " +wallet2.getID() + " " + wallet2.finalBalance());

    }
}
