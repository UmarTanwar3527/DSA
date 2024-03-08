import java.util.Scanner;
import java.lang.Math;

public class AreaOfCircle {
    public static void main(String[] args) {
        int option;
        double radius, circumference, diameter, area;
        // object of the Scanner class
        Scanner sc = new Scanner(System.in);
        // options available
        System.out.println("1. If the radius is known");
        System.out.println("2. If the diameter is known");
        System.out.println("3. If the circumference is known");
        System.out.print("Enter your choice: "); // taking an option as input from the user
        option = sc.nextInt();
        switch (option) {
            // Case statements
            case 1:
                System.out.print("Enter the radius of the circle: ");
                radius = sc.nextDouble();
                area = (Math.PI * (radius * radius));
                System.out.print("The area of the circle is: %.3f" + area + "%.3f");
                break;
            case 2:
                System.out.print("Enter the diameter of the circle: ");
                diameter = sc.nextDouble();
                area = Math.PI * (diameter * diameter) / 4;
                System.out.print("The area of the circle is: " + area);
                break;
            case 3:
                System.out.print("Enter the circumference of the circle: ");
                circumference = sc.nextDouble();
                area = (circumference * circumference) / (4 * Math.PI);
                System.out.print("The area of the circle is: " + area);
                break;
            // default case statement executes when an invalid choice is entered
            default:
                System.out.println("invalid choice!");
        }
        sc.close();
    }
}
