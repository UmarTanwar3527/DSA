public class ThirdLargest {
    public static void main(String[] args) {
        int[] numbers = { 10, 5, 8, 20, 15 };
        int n = numbers.length;
        int thirdLargest = findThirdLargest(numbers, n);

        System.out.println("The third largest number is: " + thirdLargest);
    }
// TC = O(n) // SC = O(1)
    static int findThirdLargest(int a[], int n) {
        if (n < 3)
            return -1;

        int first = a[0];
        int second = -1;
        int third = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] > first) {
                third = second;
                second = first;
                first = a[i];
            } else if (a[i] < first && a[i] > second) {
                third = second;
                second = a[i];
            } else if (a[i] < first && a[i] < second && a[i] > third) {
                third = a[i];
            }
        }
        return third;
    }
}