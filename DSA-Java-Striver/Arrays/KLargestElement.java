import java.util.ArrayList;
import java.util.Arrays;

public class KLargestElement extends Solution{
    public static void main(String[] args) {
        int[] numbers = { 10, 5, 8, 20, 15 };
        int n = numbers.length;
        int k = 3;
        ArrayList<Integer> KLargest = kLargest(numbers, n, k);

        System.out.println("The " + k + " largest number is: " + KLargest);
    }

    // TC = O(n) // SC = O(1)
    // public static ArrayList<Integer> kLargest(int arr[], int n, int k) {
    //     ArrayList<Integer> large = new ArrayList<>();
    //     // if (n < 3) return -1;
    //     int largest = arr[0];

    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] > largest) {
    //             // third = second;
    //             // second = first;
    //             largest = arr[i];
    //             large.add(largest);
    //         }
    //     }
    //     return large;
    // }
}

class Solution {
    // Function to return k largest elements from an array.
    public static ArrayList<Integer> kLargest(int arr[], int n, int k) {
        // code here
        ArrayList<Integer> large = new ArrayList<>();
        Arrays.sort(arr);

        for (int i = n - 1; i >= n - k; i--) {
            large.add(arr[i]);
        }
        return large;
    }
}
