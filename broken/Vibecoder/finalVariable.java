import java.util.*;
public class finalVariable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        final double Pi = 3.14;
        int radius ;
        System.out.println("Enter radius of circle :");
        radius = sc.nextInt();

        double area = 2 * Pi * radius * radius ;
        double perimeter = 2 * Pi * radius ;
        System.out.println("Area is "  +area+ "  Perimeter of circle is " +perimeter);
        sc.close();
    }
}
