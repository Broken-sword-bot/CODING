import java.util.*;
public class pdtype {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a ;
        float b;
        double c;
        char d;
        System.out.print("Enter a integer : ");
        a = sc.nextInt();
        System.out.print("Enter a float : ");
        b = sc.nextFloat();
        System.out.println("enter a double : ");
        c = sc.nextDouble();
        System.out.print("Enter a char : ");
        d = sc.next().charAt(0);

        System.out.println("integer is "+a+",  Float is  "+b+", Double is "+c+", char is "+c);
        sc.close();

    }
}
