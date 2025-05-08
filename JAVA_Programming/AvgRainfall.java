/*Write a JAVA Program to calculate Average rainfall in a year*/
import java.util.Scanner;
public class AvgRainfall {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of years: ");
        int numYears = scanner.nextInt();
        int totalMonths = numYears * 12;
        double totalRainfall = 0;
        for (int i = 1; i <= totalMonths; i++) {
            System.out.print("Enter the rainfall in month " + i + ": ");
            double rainfall = scanner.nextDouble();
            totalRainfall += rainfall;
        }
        double avgRainfall = totalRainfall / totalMonths;
        System.out.println("Avg rainfall per month over " + numYears + " years: " + avgRainfall + " units");
        scanner.close();
    }
}