import java.util.*;
public class PrimeNumbers {
    public static void main(String[] args) {
        int count = 0;
        int num = 2;

        Scanner sc = new Scanner(System.in);
        System.out.print("how many first prime number do you want? ");
        int n = sc.nextInt();

        while (count < n) {
            if (isPrime(num)) {
                System.out.print(num + " ");
                count++;
            }
            num++;
        }
    }

    private static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
