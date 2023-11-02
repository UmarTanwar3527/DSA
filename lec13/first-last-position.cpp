#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int n, int key) { //vector<int>& arr
    int start = 0, end = n -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int LastOcc(int arr[],int n, int key) {
    int start = 0, end = n -1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int even[13] = {1,2,3,3,3,3,3,3,3,3,3,3,5}; 

    cout << "First Occurrenece of 3 is at Index: " << firstOcc(even,13,3) << endl;
    cout << "Last Occurrenece of 3 is at Index: " << LastOcc(even,13,3) << endl;

    // cout << LastOcc(even,13,3) - firstOcc(even,13,3) + 1 ;

    return 0;
}