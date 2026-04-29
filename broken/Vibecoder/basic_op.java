import java.util.*;
public class basic_op {
    public static void main(String[] args) {
        Ao obj = new Ao();
        obj.getdata();
        obj.cal();
        obj.display();
    }
}
class Ao {
    double a , b , add,sub, mul,div;

    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first Number :");
        a = sc.nextInt();
        System.out.println("Enter your second Number : ");
        b = sc.nextInt();
    }

    void cal(){
        add = a+b;
        sub = Math.abs(a-b);
        mul = a*b;
        div = a/b;
    }
    void display(){
        System.err.println("Addition is "+add);
        System.out.println("Substraction is "+sub);
        System.out.println("Multiplication is "+mul);
        System.out.println("Division is "+div);
    }
}