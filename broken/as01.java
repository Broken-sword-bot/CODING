package broken;
import java.util.Scanner;
public class as01 {
    public static void main(String args[]){
       double v ,a , t , s;
        
        Scanner sc = new Scanner (System.in);
        System.out.println("enter number ");

        v = sc.nextDouble();
        a = sc.nextDouble();
        t = sc.nextDouble();

        s =  (v*t)+ (1/2 * a * t * t) ;
        System.out.println(" S is ="+s);
sc.close();



    }
}
 