/*Write a JAVA Program to calculate the average and sum of even numbers*/
import java.util.Scanner;
public class AvgAndSumOfEvenNum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int sum = 0;
        int count = 0;
        for (int i = 2; i <= number; i += 2) {
            sum += i;
            count++;
        }
        double average = (double) sum / count;
        System.out.println("Sum of even numbers: " + sum);
        System.out.println("Average of even numbers: " + average);
        scanner.close();
    }
}
