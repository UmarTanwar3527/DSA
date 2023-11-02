#include <bits/stdc++.h>
using namespace std;

int Sumarr(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size ; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter the Size of Array:-"<<endl;
    cin >> size;

    int num[100];
    cout << "Enter the element of array:-" <<endl;
    for(int i = 0 ; i < size ; i++){
        cin >> num[i];
    }

    cout << "The sum of all element in the array is: " << Sumarr(num,size);

    return 0;
}