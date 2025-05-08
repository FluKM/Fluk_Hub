/*Write a JAVA Program to calculate time in days and hours when entered in seconds*/
import java.util.Scanner;
public class TimeCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the time in seconds: ");
        int seconds = scanner.nextInt();
        int days = seconds / (24 * 3600);
        seconds = seconds % (24 * 3600);
        int hours = seconds / 3600;
        seconds = seconds % 3600;
        int minutes = seconds / 60;
        seconds = seconds % 60;
        System.out.println("Time in days: " + days);
        System.out.println("Time in hours: " + hours);
        System.out.println("Time in minutes: " + minutes);
        System.out.println("Time in seconds: " + seconds);
    }
}