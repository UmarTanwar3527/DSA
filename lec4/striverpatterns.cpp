#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// * 
// * *     
// * * *   
// * * * * 
void pattern1(int n){
    for(int row = 1;row<=n;row++){
            for(int col = 1;col<=row;col++){
                printf("* ");
            }
            printf("\n");
        }
}

// 1
// 1 2
// 1 2 3
// 1 2 3 4
void pattern2(int n){
    for(int row = 1;row<=n;row++){
            for(int col = 1;col<=row;col++){
                cout<<col<<" ";
            }
            cout<<endl;
        }
}

// * * * *
// * * *
// * *
// *
void pattern3(int n){
    for(int row = 0;row<n;row++){
            for(int col = 0;col<n-row;col++){
                cout<<"* ";
            }
            cout<<endl;
        }
}

//     *
//    ***
//   *****
//  *******
// *********
void pattern4(int n){
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n - row - 1; col++) {
			cout<<" ";
		}
		for (int col = 0; col < 2 * row + 1; col++) {
			cout<<"*";
		}
		cout<<endl;
	}
}

void pattern5(int n){
    for(int row = 0; row < n; row++) {
        for(int col = 0; ;col++) {

        }
        cout<<endl;
    }
}

int main(){
    // pattern1(4);
    // pattern2(4);
    // pattern3(4);
    // pattern4(5);
    pattern5(5);
}