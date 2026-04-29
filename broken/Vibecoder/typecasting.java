import java.util.Scanner;

public class typecasting {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a ;
        System.out.println("Enter a integer.");
        a = sc.nextInt();
        double b = a;
        System.out.println("Double type casted "+b);
        sc.close();
    }
}
