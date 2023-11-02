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
