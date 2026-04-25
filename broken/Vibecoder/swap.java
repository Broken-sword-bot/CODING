import java.util.*;
public class swap {
    public static void main(String[] args) {
        int x,y,t;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number : ");
        x = sc.nextInt();
        System.out.print("Enter ssecond number : ");
        y = sc.nextInt();
        System.out.println("Before Swapping x = " +x );
         System.out.println("Before Swapping y = " +y );
        t = x;
        x = y;
        y = t ;
        System.out.println("After Swapping x = " +x );
         System.out.println("After Swapping y = " +y );
        sc.close();
    }
}
