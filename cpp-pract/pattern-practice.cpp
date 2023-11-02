#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for(int row = 1;row<=n;row++) {
        for(int col = 1;col<=row;col++) {
            int sum = row + col ;
            if(sum % 2 == 0) {
                cout<<"1 ";
            } 
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    pattern(5);
    return 0;
}