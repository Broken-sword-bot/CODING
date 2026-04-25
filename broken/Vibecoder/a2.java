import java.util.*;
public class a2 {
    public static void main(String[] args) {
        int x,y,z;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number : ");
        x = sc.nextInt();
        System.out.print("Enter second number : ");
        y = sc.nextInt();
        z = x +y;
        System.out.println("Addition is : "+z);
        sc.close();
    }
}
