#include<iostream>
using namespace std;

void printcounting(int n){

    for (int i = 0;i<= n;i++){
        cout << i << " ";
    }
    cout << endl;

}

int main( ) {

    int n ;
    cin >> n ;
    // function call
    printcounting(n);

    return 0;
}