import java.util.List;

public class HigestElementinArray {
    public int findPeakElement(List<Integer> a)
    {
        // Code here
        // int peak = a[0];
        // for(int i = 0 ; i < a.length ; i++){
        //     if(a[i] > peak){
        //         peak = a[i];
        //     }
        // }
        // return peak;
        int peak = a.get(0); // Use get() method to access elements in a List
        for (int i = 0; i < a.size(); i++) {
            if (a.get(i) > peak) {
                peak = a.get(i);
            }
        }
        return peak;
    }
    public static void main(String[] args) {
        // int[] arr = {2,4,78,5,9,5,345,67,8,89,786};
        // int ans = findPeakElement(arr);
    }
}
