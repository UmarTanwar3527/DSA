#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
/*
digit = 123
same flow    and     reverse flow

formula for same flow
ans = (ans * 10) + digit


formula for reverse flow
ans = (digit * pow(10, i )) + ans

*/
// PROGRAMM TO CONVERT DECIMAL TO BINARY
// int main (){
    
//     int n ;
//     cin >> n;

//     float ans = 0;
//     int i = 0; 
//     while (n != 0)
//     {
//         int bit = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;
//     }
//     cout<<"Answer is: "<<ans<<endl;
// }

// Negative Decimal to Binary (HomeWork)
// int main (void){
//     long long int n;
//     cout<<"Enter a number (Negative number)";
//     cin>> n;
//     unsigned long long int i =0, ans = 0;
//     if(n < 0) {
//         n = pow(2 , 16) + n;
//     }
//     cout << n << endl;
//     while (n)
//     {
//         int lastBit = n & 1;
//         ans = (pow(10, i) * lastBit) + ans;
//         n = n >> 1;
//         i++;
//         cout<< ans<<endl;
//     }
//     cout<< ans << endl;
//     return 0;
    
// }


// Binary to Decimal convert

int main (){
    
}
