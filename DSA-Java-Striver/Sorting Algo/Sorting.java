import java.util.*;

public class Sorting {
    public static void selection_sort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int mini = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        // System.out.println("After selection sort:");
        // for (int i = 0; i < n; i++) {
        //     System.out.print(arr[i] + " ");
        // }
    }

    public static void bubble_sort(int arr[], int n) {
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j <= i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void insertion_sort(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                // int temp = arr[j - 1];
                // arr[j - 1] = arr[j];
                // arr[j] = temp;

                swap(arr,j-1,j);

                j--;
            }
        }
    }

    public static void swap(int[]arr,int a,int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    private static void merge(int[] arr, int low, int mid, int high) {
        ArrayList<Integer> temp = new ArrayList<>(); // temporary array
        int left = low; // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr

        // storing elements in the temporary array in a sorted manner//

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.add(arr[left]);
                left++;
            } else {
                temp.add(arr[right]);   
                right++;
            }
        }

        // if elements on the left half are still present //

        while (left <= mid) {
            temp.add(arr[left]);
            left++;
        }

        // if elements on the right half are still present //
        while (right <= high) {
            temp.add(arr[right]);
            right++;
        }

        // transfering all elements from temporary to arr //
        for (int i = low; i <= high; i++) {
            arr[i] = temp.get(i - low);
        }
    }

    public static void mergeSort(int[] arr, int low, int high) {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid); // left half
        mergeSort(arr, mid + 1, high); // right half
        merge(arr, low, mid, high); // merging sorted halves
    }

    public static void quickSort(int[] arr, int low, int high){

        if(low < high){
            int pIndex = partition(arr,low,high);

            quickSort(arr,low,pIndex-1);
            quickSort(arr,pIndex+1,high);
        }
    }

    public static int partition(int[] arr, int low, int high){
        int pivot = arr[low];
        int i = low;
        int j = high;

        while(i < j){
            while(arr[i] <= pivot && i <= high - 1){
                i++;
            }
            while(arr[j] > pivot && j >= low + 1){
                j--;
            }
            if(i < j){
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                swap(arr,i,j);
            }
        }
        // int temp = arr[low];
        // arr[low] = arr[j];
        // arr[j] = temp;

        swap(arr,low,j);
        return j;
    }

    public static void main(String[] args) {
        // int arr[] = { 13, 46, 24, 52, 20, 9 };
        int [] arr = {4,6,2,5,7,9,1,3};
        int n = arr.length;

        System.out.println("Before sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        // CALLING SORTING ALGORITHM
        // selection_sort(arr, n);
        // bubble_sort(arr,n);
        // insertion_sort(arr, n);
        // mergeSort(arr, 0, n - 1);
        quickSort(arr,0,n-1);

        // PRINTING SORTED NUMBER
        System.out.println("After sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
