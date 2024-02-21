import java.util.HashSet;

public class RemoveDuplicatesFormASortedArray {
    public static int HashSetApproach(int[] arr) {
        // Brute Force
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < arr.length; i++) {
            set.add(arr[i]);
        }
        int k = set.size();
        int j = 0;
        for (int x : set) {
            arr[j++] = x;
        }
        return k;
    }

    public static int TwoPointerApproach(int[] arr) {
        // Optimal Approach
        int i = 0;
        for (int j = 1; j < arr.length; j++) {
            if (arr[i] != arr[j]) {
                arr[i + 1] = arr[j];
                i++;
            }
        }
        return i + 1;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 1, 2, 2, 2, 3, 3 };
        int k = TwoPointerApproach(arr);
        // System.out.print("The array after removing duplicate elements is ");
        // for (int i = 0; i < k; i++) {
        //     System.out.print(arr[i] + " ");
        // }
        // System.out.println();
        System.out.println("Size of Array is: " + k);
    }
}
