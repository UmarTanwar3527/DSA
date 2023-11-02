#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;

// REVERSE INTEGER
// int main()
// {
//     class Solution
//     {
//     public:
//         int reverse(int x )
//         {
//             int ans = 0;
//             while(x!=0)
//             {
                
//                 int digit = x % 10; 
//                 ans = (ans * 10)+digit;
//                 x = x/10;
            
//             }
//             return 0 ;
//         }
//     };
// }

// COMPLEMENT INTEGER
// int main()
// {
//     int n ;
//     cout<<"Hello";
// }


// POWER OF TWO
class Solution {
public:
    // bool isPowerOfTwo(int n) {
    //     for (int i = 0; i <= 30; i++){
    //         int ans = pow(2, i);
    //         if(ans == n){
    //             return true;
    //         }   
    //     }
    //     return false;
    // }
     bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i = 0; i <= 30; i++) {
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }
};
