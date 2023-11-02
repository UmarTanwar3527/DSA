#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[] , int size, int key){
    int start =0;
    int end  = size - 1;
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
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] =  {3,8,11,14,16};
    int evenIndex = binarysearch(even,6,6);
    cout << "Index of 6 is: " << evenIndex << endl;
    int oddIndex = binarysearch(odd,5,3);
    cout << "Index of 3 is: " << oddIndex << endl;
    return 0;
}