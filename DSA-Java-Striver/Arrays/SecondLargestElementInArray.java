public class SecondLargestElementInArray {
    public static void main(String[] args) {
        // a = new int[n];
        int a[] = {2,4,1,3,5};
        
        int slargest = secondLargest(a , a.length);
        // int ssmallest = secondSmallest(arr , n);
        // return {slargest,ssmallest};
        System.out.println("second largest"+slargest);
        // System.out.println("second smallest"+ssmallest);
        // return new int[]{slargest, ssmallest};
    }
    public static int secondLargest(int[] a,int n){
        int largest = a[0];
        int slargest = -1;
        for(int i =0;i<n;i++){
            if(a[i] > largest){
                largest = a[i];
                slargest = largest;
            }
            else if(a[i] < largest && a[i] > slargest){
                slargest = a[i];
            }
        }
        return slargest;
    }
    public static int secondSmallest(int[] a,int n){
        int smallest = a[0];
        // int ssmallest = INT_MAX;
        int ssmallest = Integer.MAX_VALUE;

        for(int i =0;i<n;i++){
            if(a[i] < smallest){
                smallest = a[i];
                ssmallest = smallest;
            }
            else if(a[i] != smallest && a[i] < ssmallest){
                ssmallest = a[i];
            }
        }
        return ssmallest;
    }
}