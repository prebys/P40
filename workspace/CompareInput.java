//CompareInput.java - - Input two number, compare them, and print the sum
import java.util.Scanner;

public class CompareInput {
    public static void main(String[] args) {
        // Prepare for system input
        Scanner scanner = new Scanner(System.in);

        // Prompt and read a
        System.out.println("Enter value for a:");
        int a = scanner.nextInt();

        // Prompt and read b
        System.out.println("Enter value for b:");
        int b = scanner.nextInt();

        int sum = a + b;

        // Conditional check
        if (a > b) {
            System.out.println("a is greater than b");
        } else {
            System.out.println("a is less than or equal to b");
        }

        // Print formatted result
        System.out.printf("a=%d, b=%d, a+b=%d%n", a, b, sum);

        scanner.close();
    }
}

