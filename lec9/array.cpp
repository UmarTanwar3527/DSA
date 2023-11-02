// INTRODUCTION TO ARRAY ..
#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {10,20,30,40,50}; 

    cout << arr[4]<<endl;
    cout << arr[2]+1<<endl;
    cout << *arr+1<<endl;
    
    cout << arr[0] << " " << endl ;
    
    cout<<sizeof(arr)/sizeof(arr[0]);

    return 0;
}

// int main  (){
//     int ar[100];

//     //To initialize the array with value'1'.
//     fill_n(ar, 100, 1);

//     //To check the array input (kewaal 5 hi kari h print)
//     for(int i = 0; i <= 5; i++){
//         cout << ar[i] << " ";
//     }


//     return 0;
// }