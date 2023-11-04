#include<iostream>
using namespace std;
// int main()
// {
//     int a = 4;
//     int b = 6;
//     cout<<" a&b: " << (a&b) << endl;
//     cout<<" a|b: " << (a|b) << endl;
//     cout<<" ~a: " << ~a << endl;
//     cout<<" a^b: " << (a^b) << endl;
    
//     cout<< (17>>1)<<endl; // RS / by 2
//     cout<< (21>>1)<<endl; // RS / by 2
//     cout<< (21<<2)<<endl; // LS * by 2
// QUESTION 1
    // int a = 1;
    // int b = 2;

    // if (a-- > 0 || ++b > 2)
    // {
    //     cout<< "Stage1 - inside if \n";
    // }
    // else
    // {
    //     cout<< "Stage2 - inside else ";
    // }
    // cout<< a << " " << b << endl; 

// QUESTION 2

// int a;
// int b = 1;
// a = 10;
// if (++a)
// {
//     cout<<b;

// }
// else
    // cout<< ++b;


// QUESTION 3

// int num = 5;
// cout<<(25*(++num));

// int a = 1;
// int b = a++;
// int c = ++a;
// cout<< b<<endl;
// cout<< c;

// }


// FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP FORLOOP

// int main()
// {
//     int n;
//     cout<<"Enter the value of n";
//     cin>>n;
//     // cout<<"Printing the count from one to n"<<endl;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         // cout<<i<<endl;
//         sum = sum + 1;       
//     }
//     cout<< sum <<endl;
//     return 0;
// }


// FIBONACCI  SERIES    FIBONACCI  SERIES   FIBONACCI  SERIES   FIBONACCI  SERIES
// int main()
// {
//     int n = 10;

//     int a = 0;
//     int b = 1;
//     cout<<a<<" ";
//     for (int  i = 1; i <= n; i++)
//     {
//         int nextnumber = a + b;
//         cout<< nextnumber<<" ";

//         a = b;
//         b = nextnumber;
//     }
// }
        /*
        print fibonachi number for the given number 
        1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 ..
        eg: i/p = 6 o/p is 8
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        // int n = 10;
        // cin >> n;
        // vector<int> dp(n + 1,-1);
        // dp[0] = 0; dp[1] = 1;
        // for (int  i = 2; i <= n; i++)
        // {
        //         dp[i] = dp[i - 1]+dp[i - 2];
        // }
        // cout<<dp[n];

int main ()
{
    int n;
    cout<<"Enter the number ";
    cin>> n;

    bool isprim = 1;

    for (int  i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout<<"Not a Prime Number";
            isprim = 0;
            break;
        }
    }
    if(isprim == 0)
    {
        cout<<"Not a prime number";
    }
    else
    {
        cout<<"Is a prime Number";
    }
}


// int main(int argc, char const *argv[])
// {
//     for (int  i = 0; i < 5; i++)
//     {
//         cout<<"Hy"<<endl;
//         cout<<"Hii"<<endl;
//         continue;
//         cout<<"Reply";
//     }
// }

// TABLE TABLE TABLE TABLE TABLE TABLE TABLE 
// int main(){
//     int n;
//     cout<<"Enter a Number which you want to have Table: ";
//     cin>>n;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
//     }
// }  