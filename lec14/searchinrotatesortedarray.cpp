#include <bits/stdc++.h>
using namespace std;

int pivotindex(vector<int>& arr, int n ) {
    int s = 0, e = n -1;
    int mid = s + (e - s)/2;

    while(s < e ) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int binarysearch(vector<int>& arr , int s,int e, int key){
    int start = s;
    int end  = e;
    // int mid = ( start + end ) / 2; // IN THIS THE MID POINTER CAN GET OUT OF RANGE
    int mid = start + ( end - start ) / 2; // WE CAN GET MID OUT OF RANGE IF START AND END CAN BE 2^31 -1
    // mid = start + (end - start) / 2
    while (start <= end ){
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key )
            start = mid + 1;
        else 
            end = mid -1;
        // MID HAVE TO UPDATE AS WE HAVE UPDATED MID OR END 
        mid = (start + end)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    int pivot = pivotindex(arr,n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarysearch(arr, pivot, n-1, k);
    }
    else{
        return binarysearch(arr, 0, pivot - 1, k);
    }
    // return -1;
}
int main() {
    int n = 6;
    vector<int> arr;
    int k = 7;
    arr = {2, 3, 5,6,7, 8};
    int result  = search(arr,n,k);
    cout << "Index of "<<k<<" is: "<<result << endl;
}


// STRIVER 

int search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == k) return mid;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}