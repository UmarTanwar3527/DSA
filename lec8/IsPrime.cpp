#include <iostream>
using namespace std;

// 1 -> Prime no
// 0 -> Not Prime no
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

    int n;
    cout<<"Enter a Number to wheather it's a Prime Number or Not."<<endl;
    cin >> n;

    if (isPrime(n))
        cout << n <<" Is a Prime number " << endl;
    else
        cout << n <<" Not a prime number " << endl;

    return 0;
}