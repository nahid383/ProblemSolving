
import java.util.Scanner;

public class CheckCalendar {
    static boolean isLeapYear(int year) {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        return year % 4 == 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String d = "" + s.charAt(0) + s.charAt(1);
        int date = Integer.parseInt(d);
        String m = "" + s.charAt(3) + s.charAt(4);
        int month = Integer.parseInt(m);
        String y = "" + s.charAt(6) + s.charAt(7) + s.charAt(8) + s.charAt(9);
        int year = Integer.parseInt(y);
        if((year>=1000 && year<=9999) && (month>=1 && month<=12)){
            if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ||month==12){
                if(date>=1 && date<=31){
                    if(month==1){
                        System.out.println("January");
                    } else if(month==3){
                        System.out.println("March");
                    } else if(month==5){
                        System.out.println("May");
                    } else if(month==7){
                        System.out.println("July");
                    } else if(month==8){
                        System.out.println("August");
                    } else if(month==10){
                        System.out.println("October");
                    } else if(month==12){
                        System.out.println("December");
                    }
                } else{
                    System.out.println("-1");
                }
            } else if(month==2){
                if(isLeapYear(year)){
                    if(date>=1 && date<=29){
                        System.out.println("February");
                    } else{
                        System.out.println("-1");
                    }
                } else{
                    if(date>=1 && date<=28){
                        System.out.println("February");
                    } else{
                        System.out.println("-1");
                    }
                }
            } else{
                if(date>=1 && date<=30){
                    if(month==4){
                        System.out.println("April");
                    } else if(month==6){
                        System.out.println("June");
                    } else if(month==9){
                        System.out.println("September");
                    } else if(month==11){
                        System.out.println("November");
                    }
                } else{
                    System.out.println("-1");
                }
            }
        } else{
            System.out.println("-1");
        }
    }
}
