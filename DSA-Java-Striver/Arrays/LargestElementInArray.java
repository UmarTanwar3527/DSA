import java.util.* ;
import java.io.*; 
// below library is used to sort arrays and also to perform several operations
import java.util.Arrays;

public class Solution {
    static int largestElement(int[] arr, int n) {
        int max = arr[0];

        for(int i = 1 ; i < n;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;

        // METHOD SECOND (BY SORTING ARRAY)
        Arrays.sort(arr);
        return arr[n-1];
	}
}