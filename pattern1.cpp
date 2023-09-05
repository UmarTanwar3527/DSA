#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     int i = 1;
//     while (i<=n)
//     {
//         int j = 1;
//         // int j = i;
//         while(j<=n)
//         {
//             // printing star patterns 
//             // cout<<"*";
//             // printing numbers in row
//             // cout<<i;
//             // printing numbers in line 123456...
//             cout<<j;
//             // printing numbers in line 654321...
//             // cout<<n-j+1;
//             j = j + 1;

//         }
//         cout<<endl;
//         i = i + 1;
//     }    
// }

int main()
{
    int n;cout<<"Enter number";cin>>n;

    int row =1;
    while (row<=n)
    {
        int space = row - 1;                
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }
        int col = 1;
        int star = n - row + 1;
        while (col <= row)
        {   
            while (col<=star)
            {
                cout<<"*";
                col  = col + 1; 
            }
        }
        cout<<endl;
        row= row +1;
    }
} 
