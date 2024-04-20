import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.* ;
import java.io.*; 
public class Solution{
	
	// Function with two parameters
	public static int add(int num1, int num2) {
		return num1 + num2;
	}
	
	// Function with three parameters
	public static int add(int num1, int num2, int num3) {
		return num1 + num2 + num3;
	}
	
	public static void main(String args[]) {
		
		// Method calling by passing arguments
		int sumOfTwoNumbers = Solution.add(10, 20);
		int sumOfThreeNumbers = Solution.add(10, 20, 30);
		
		System.out.println(sumOfTwoNumbers);
		System.out.println(sumOfThreeNumbers);
	}
	
	public static List< Integer > printDivisors(int n) {
        List<Integer> divisors = new ArrayList<>();
        
        // Iterate from 1 to the square root of n
        for (int i = 1; i * i <= n; i++) {
            // Check if i divides n evenly
            if (n % i == 0) {
                // Add i to the list of divisors
                divisors.add(i);
                
                // If i is not equal to n/i, add n/i as well
                if (i != n / i) {
                    divisors.add(n / i);
                }
            }
        }
        
        Collections.sort(divisors);
        return divisors;
    }

	public static int countSetBits(int n) {
		String binaryform = Integer.toBinaryString(n);
		int cunt= 0;
		for (int i = 0; i < binaryform.length(); i++) {
			if(binaryform.charAt(i) == '1'){
				cunt++;
			}
		}
		return cunt;
	}
}
class CountPrime {
	boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int totalPrime(int S, int E) {
        int count = 0;
        for (int i = S; i <= E; i++) {
            if (isPrime(i)) {
                count++;
            }
        }
        return count;
    }
	public static void main(String args[]) {
		
		CountPrime obj = new CountPrime();
		Scanner sc = new Scanner(System.in);
		int s = sc.nextInt();
		int e = sc.nextInt();
		System.out.println(obj.totalPrime(s, e));
	}
}

