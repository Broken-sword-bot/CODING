import java.util.*;
public class swap1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a , b, temp;
        System.out.print("Enter ffirst value : ");
        a = sc.nextInt();
        System.out.print("Enter second value : ");
        b = sc.nextInt();

        System.out.println("Before swaping a is "+a+" b is "+b);
        temp = a;
        a = b; 
        b = temp;
        System.out.println("Afte swaping a is "+a+" b is "+b);
        
    }
}
