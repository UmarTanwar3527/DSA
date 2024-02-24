// 2) Get an unsorted array and convert into alternate array(alternate array-ascending order array by taking alternate elements). Half elements of array in ascending remaining half in descending. The first n elements should be sorted in ascending order and the next part should be sorted in descending and print it.
// Test Case Input: [1,2,3,4,5,6,7,8].8.4
// Output: \{1, 2, 3, 4, 8, 7, 6, 5\}
// Function: fn_name(input array, length of array, no of digits to sort (here 3)) Fn_name(input array, 8,4)

import java.util.Arrays;

public class RotateArrayinHalf {
    public static void main(String[] args) {
        int[] nums = { 2, 5, 4, 9, 2, 6, 8, 12 };
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            System.out.print(nums[i] + " ");
        }
// for (type var : array) 
// { 
//     statements using var;
// }
        System.out.println();
        Arrays.sort(nums);
        for (int i = 0; i < n; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
        int k = nums.length / 2; 
        System.out.println(k);
        System.out.println(nums.length);

        reverse(nums, k, n - 1);
        System.out.println();
        for (int i = 0; i < n; i++) {
            System.out.print(nums[i] + " ");
        }
    }

    public static void reverse(int[] arr, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            int store = arr[i];
            arr[i] = arr[j];
            arr[j] = store;
        }
    }
}
