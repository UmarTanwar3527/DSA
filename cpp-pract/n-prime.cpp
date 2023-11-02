#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        // divide hoo raha h mtlb prime nunber nahi h
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{

    // int n = 7;
    // // cout<<"Enter a Number to wheather it's a Prime Number or Not."<<endl;
    // // cin >> n;

    // if (isPrime(n))
    //     cout << n <<" Is a Prime number " << endl;
    // else
    //     cout << n <<" Not a prime number " << endl;
    // int n1,n;
    // int n2;
    // cout<<"enter first number ";
    // cin >> n1;
    // cout<<"enter second number ";
    // cin >> n2;

    for(int i = 2; i <= 20;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}