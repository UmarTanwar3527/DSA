#include <bits/stdc++.h>
using namespace std;


int search(int arr[],int size, int key){

    for(int i = 0;i <size;i++){
        if(arr[i]==key)
        return i;
    }
    return -1;

}

int main(){

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    // wheather 1 is present or not
    cout<< "Enter the element to search for: "<<endl;
    int key;
    cin>>key;

    // bool found = search(arr,10,key);

    // if(found)
    //     cout<<"Key is Present"<<endl;
    // else
    //     cout<<"Key is Absent"<<endl;

    int senum  = search(arr,10,key);
    if(senum == -1) {
        cout<<"The number is not present"<<endl;
    }
    else{
        cout<<"number is present at "<<senum;
    }

    return 0;
}