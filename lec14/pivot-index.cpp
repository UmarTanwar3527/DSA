#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pivotindex(int arr[], int n ) {
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

int main(){
    int arr[6] = {5,8,10,17,2,3};

    cout<<"Pivot Index is: " << pivotindex(arr,6) << endl;

    return 0;
}  

 // int s = 0 ;
        // int end = a.length - 1 ;
        // int mid = s + (end - s) / 2;
        // while(s < end) {
        //     if(arr[mid] < arr[mid + 1]) {
        //         s = mid + 1;
        //     }
        //     else {
        //         end = mid;
        //     }
        //     mid = s + (end - s) / 2;
        // }
        // return s;