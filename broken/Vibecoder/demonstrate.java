import java.util.Scanner;

public class demonstrate {
    public static void main(String[] args) {
        Avg obj = new Avg();
        obj.getdata();
        obj.Average();
        obj.display();
    }
}
 class Avg{
    int x , y , z;
    double avg;
    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter three digits : ");
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
    }

    void Average(){
        avg = (x +y+z)/3;
    }
    void display(){
        System.out.println("Average is : "+avg);
    }
}