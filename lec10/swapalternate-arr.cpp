#include <bits/stdc++.h>
using namespace std;

void swapalternate(int arr[], int size){
    for(int i =0;i<size;i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}

void PrintArray(int arr[], int n){
    for (int i = 0; i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
}

int main(){
    int even[6]={1,4,0,5,-2,15};
    int odd[5]={2,6,3,9,4};

    swapalternate(even,6);
    PrintArray(even,6);
    
    swapalternate(odd,5);
    PrintArray(odd,5);

    return 0;
}