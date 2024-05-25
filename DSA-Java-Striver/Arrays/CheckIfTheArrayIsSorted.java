public class CheckIfTheArrayIsSorted {
    public static int isSorted(int n, int []a) {
        // Write your code here.
        for (int i = 1; i < a.length; i++) {
            if(a[i] < a[i-1]){
                return 0;
            }
        }
        return 1;
    }
}
// Leetcode 1752 - Check if The Array is Sorted and Rotated
class Solution {
    public boolean check(int[] nums) {
        int n=nums.length;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[(i+1)%n]>=nums[i])
            {
            }
            else
            c++;
        }
        return c<=1;
    }

    public static void main(String[] args) {
        int[] nums = {3, 4, 5, 1, 2};
        int arrLength = nums.length;
        int result = CheckIfTheArrayIsSorted.isSorted(arrLength , nums);
        System.out.println("Is the array sorted and rotated? " + result);
    }
}
