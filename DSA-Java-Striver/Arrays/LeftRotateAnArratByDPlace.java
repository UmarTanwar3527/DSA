// import java.util.*;

// import java.util.ArrayList;

public class LeftRotateAnArratByDPlace {
    public void LeetcodeSolution(int[] nums, int k) {
        int n = nums.length;
        k = k % n;// If k = N then there is no point to reverse it
        // LEFT ROTATION
        // Reverse first n-k elements
        reverse(nums, 0, k - 1);
        // Reverse last k elements
        reverse(nums, k, n - 1);
        // Reverse whole array
        reverse(nums, 0, n - 1);

        // RIGHT ROTATION
        // Reverse first n-k elements
        reverse(nums, 0, n - k - 1);
        // Reverse last k elements
        reverse(nums, n - k, n - 1);
        // Reverse whole array
        reverse(nums, 0, n - 1);
    }

    public void reverse(int[] arr, int start, int end) {
        for (int i = start, j = end; i < j; i++, j--) {
            int store = arr[i];
            arr[i] = arr[j];
            arr[j] = store;
        }
        // while(start <= end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;
        // }
    }
}

// class Solutionclass {
//     // CODESTUDIO CODE
//     public static ArrayList<Integer> rotateArray(ArrayList<Integer> arr, int k) {
//         int n = arr.size();
//         k = k % n;
//         reverse(arr, 0, k - 1);
//         reverse(arr, k, n - 1);
//         reverse(arr, 0, n - 1);
//         return arr;
//     }

//     public static void reverse(ArrayList<Integer> arr, int start, int end) {
//         while (start <= end) {
//             int temp = arr.get(start);
//             arr.set(start, arr.get(end));
//             arr.set(end, temp);
//             start++;
//             end--;
//         }
//     }
// }

// class BruteSolution {
//     public static void UsingTempArray(int[] arr, int n, int k) {
//             // BRUTE FORCE APPROACH
//             // For Rotating the Elements to right
//             if (n == 0)
//                 return;
//             k = k % n;
//             if (k > n)
//                 return;
//             int[] temp = new int[k];
//             for (int i = n - k; i < n; i++) {
//                 temp[i - n + k] = arr[i];
//             }
//             for (int i = n - k - 1; i >= 0; i--) {
//                 arr[i + k] = arr[i];
//             }
//             for (int i = 0; i < k; i++) {
//                 arr[i] = temp[i];
//             }

//             // For Rotating the Elements to Left
//             if (n == 0)
//                 return;
//             k = k % n;
//             if (k > n)
//                 return;
//             int[] temp2 = new int[k];
//             for (int i = 0; i < k; i++) {
//                 temp2[i] = arr[i];
//             }
//             for (int i = 0; i < n - k; i++) {
//                 arr[i] = arr[i + k];
//             }
//             for (int i = n - k; i < n; i++) {
//                 arr[i] = temp2[i - n + k];
//             }
//         }
// }