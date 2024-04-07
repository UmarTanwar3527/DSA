#include <bits/stdc++.h>
using namespace std;

// JAVA SOLUTION FOR GFG QUESTION ------ Fibonacci series up to Nth term ------

// class Solution {
//     int[] Series(int n) {
//         // code here
//         int MOD = 1000000007;
//         int[] fib = new int[n + 1];
        
//         // Base cases
//         fib[0] = 0;
//         fib[1] = 1;
        
//         // Calculate Fibonacci series up to nth term
//         for (int i = 2; i <= n; i++) {
//             fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
//         }
        
//         return fib;
//     }
// }


// PRINTING FIBONACHI SERIES TO THE GIVEN NUMBER
// if input is 32 then it will print first 32 numbers and 0 and 1
int main()
{
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;


    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int  i = 1; i < n; i++)
    {
        int nextnumber = a + b;
        cout<< nextnumber<<" ";

        a = b;
        b = nextnumber;
    }
}


// PRINTING  N TH TERM OF THE FIBONACHI SERIES
// int fibonachi(int n){
//     int a = 0;
//     int b = 1;

//     for(int i = 2;i < n;i++){
//         int nextnmber = a + b;

//         a = b;
//         b = nextnmber;
//     }
//     return b;
// }

// int main (){
//     int n;
//     cin >> n;

//     cout << fibonachi(n);

//     return 0;
// }