package broken;
import java.util.*;
public class as04 {
    public static void main(String args[]){
        double bs;
        double hra,da,ns;
        Scanner sc = new Scanner(System.in);
        bs = sc.nextDouble();
        hra = (20.0/100.0) * bs;
        da = (60.0/100.0) * bs;
        ns = bs + hra + da ;

        System.out.println("Net Salary is " +ns);
        sc.close();
    }
}
