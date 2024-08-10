// import java.util.Arrays;

// class Solution {
//     public int[] twoSum(int[] nums, int target) {
//         int n = nums.length;
//         Arrays.sort(nums);
//         int start = 0;
//         int end = n - 1;

//         while (start < end) {
//             int sum = nums[start] + nums[end];

//             if (sum == target) {
//                 // Return the indices of elements that sum up to the target
//                 return new int[]{start, end};
//             } else if (sum < target) {
//                 start++;
//             } else {
//                 end--;
//             }
//         }

//         // If no such pair is found
//         return new int[]{};
//     }
// }
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j };
                }
            }
        }
        return new int[] {}; // No solution found
    }
}

// class Solutiontwo {
//     public int[] twoSum(int[] nums, int target) {
//         for (int i = 1; i < nums.length; i++) {
//             for (int j = i; j < nums.length; j++) {
//                 if (target == nums[j] + nums[j - i]) {
//                     return new int[] { j, j - i };
//                 }
//             }
//         }
//         return null;
//     }
// }

public class TwoSum {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = { 3, 2, 4 };
        int target = 6;

        int[] result = solution.twoSum(nums, target);

        if (result.length == 2) {
            System.out.println("Indices of elements that sum up to the target: [" + result[0] + ", " + result[1] + "]");
        } else {
            System.out.println("No such pair found.");
        }
    }
}
