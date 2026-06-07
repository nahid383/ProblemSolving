
import java.util.Scanner;

class Person{
    String name;
    int age;
    String phnum;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
        this.phnum = "Not Provided";
    }

    Person(String name, int age, String phnum) {
        this.name = name;
        this.age = age;
        this.phnum = phnum;
    }

    void display(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Phone Number: " + phnum);
    }
}

public class practice {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter Name: ");
       String name1 = sc.nextLine();
       System.out.println("Enter age: ");
       int age1 = sc.nextInt();
       sc.nextLine();
       
       System.out.println("Enter Name: ");
       String name2 = sc.nextLine();
       System.out.println("Enter age: ");
       int age2 = sc.nextInt();
       System.out.println("Enter Phone Number: ");
       String phone = sc.next();
       sc.nextLine();
       Person p1 = new Person(name1, age1);
       Person p2 = new Person(name2, age2, phone);
    
       System.out.println("Person 1:");
       p1.display();
       System.out.println("Person 2:");
       p2.display();
       
    }
}
