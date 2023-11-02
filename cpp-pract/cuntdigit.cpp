#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigits(int number) {
    int count = 0;
    while (number) {
        number /= 10;
        count++;
    }
    return count;
}

int main(){
    
    int number ;
    cout<<"Enter a number: ";
    cin>>number;
    int result = countDigits(number);
    cout<<"Number of digit in the given number is: "<<result<<endl;

    return 0;
}