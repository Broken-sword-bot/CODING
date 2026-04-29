import java.util.*;
public class simple_int {
    public static void main(String[] args) {
        aprt obj = new aprt();
        obj.getdata();
        obj.SimpleInt();
        obj.display();
    }
}
class aprt{
    int p , r, t;
    double si;
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter principple Value : ");
        p = sc.nextInt();
        System.out.print("Enter rate value : ");
        r = sc.nextInt();
        System.out.println("Enter time : ");
        t = sc.nextInt();
    }
    void SimpleInt(){
        si = (p*r*t)/100;
    }
    void display(){
        System.out.println("Simple Interst is  "+si);
    }
}