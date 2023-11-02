#include <bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size){
    cout << "Printing the Array" << endl;

    for (int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Done"<<endl;  
}

int main(){

    int first[10] = {10,20,30,40,50,60};
    int arrSize = sizeof(first)/sizeof(first[0]);

    printArray(first,arrSize);

    return 0;
}

// int arr[] = {10,20,30,40,50,60};
// int arrSize = sizeof(arr)/sizeof(arr[0]);
// cout << "The size of the array is: " << arrSize;