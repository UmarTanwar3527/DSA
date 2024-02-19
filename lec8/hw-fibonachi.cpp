#include <bits/stdc++.h>
using namespace std;

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
    for (int  i = 1; i <= n; i++)
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