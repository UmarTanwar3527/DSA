// import java.util.* ;
// import java.io.*; 
// below library is used to sort arrays and also to perform several operations
// import java.util.Arrays;

public class LargestElementInArray {
    static int largestElement(int[] arr, int n) {
        int max = arr[0];

        for(int i = 1 ; i < n;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        return max;

        // METHOD SECOND (BY SORTING ARRAY)
        // Arrays.sort(arr);
        // return arr[n-1];
	}
    // public static void main(String[] args) {
    //     int []arr = {12,13,23,34,53,65,78,65,42,1,35,32};
    //     int n = arr.length;
    //     System.out.println(largestElement(arr, n));
    // }
}

// STATIC IMPORT
// import static LargestElementInArray.largestElement;

// INNER CLASS - WE JUST COPY THE WHOLE CLASS TO THE MAIN FUNCTION CLASS 
class Solution{
    public static void main(String[] args) {
        int []arr = {12,13,23,34,53,65,78,65,42,1,35,32};
        int n = arr.length;
        System.out.println(LargestElementInArray.largestElement(arr, n));

        // INSTANCE MEATHOD
        // LargestElementInArray lea = new LargestElementInArray();
        // System.out.println(lea.largestElement(arr, n));
    }
}