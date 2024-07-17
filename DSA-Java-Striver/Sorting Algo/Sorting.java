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
        System.out.println("After selection sort:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void bubble_sort(int arr[], int n) {
        for(int i = n-1;i>=0;i--){
            for(int j = 0;j <= i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    public static void insertion_sort(int arr[], int n) {
        for(int i = 0; i < n;i++){
            int j = i;
            while(j > 0 && arr[j - 1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;

                j--;
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = { 13, 46, 24, 52, 20, 9 };
        int n = arr.length;

        System.out.println("Before sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        // CALLING SORTING ALGORITHM
        // selection_sort(arr, n);
        // bubble_sort(arr,n);
        insertion_sort(arr, n);
        
        // PRINTING SORTED NUMBER
        System.out.println("After sorting:");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
