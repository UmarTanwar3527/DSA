#include <bits/stdc++.h>
using namespace std;

bool isEven(int a){
    if(a&1) // ODD
        return 0;
    return 1; // EVEN
}

int main (){

    int num ;
    cin >> num ;

    if(isEven(num))
        cout << "Number is Even" << endl;
    else
        cout << "Number is Odd" <<endl;

    return 0;

}