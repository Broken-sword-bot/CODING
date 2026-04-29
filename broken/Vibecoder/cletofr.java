import java.util.*;
public class cletofr {
    public static void main(String[] args) {
        double c , f;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter celsius : ");
        c = sc.nextDouble();
        f = (c * 1.8) + 32;
        System.out.println("Farenheit is "+f);
    }
}
