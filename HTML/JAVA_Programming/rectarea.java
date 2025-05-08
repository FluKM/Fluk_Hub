/*Write a JAVA Program to calculate the area of Rectangle*/
import java.util.Scanner;
public class rectarea
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length:");
        int len = sc.nextInt();
        System.out.println("Enter breath:");
        int brt = sc.nextInt();
        int area = len*brt;
        System.out.print("Area of the Rectangle:");
        System.out.println(area);
    }
}