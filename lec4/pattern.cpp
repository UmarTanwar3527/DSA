#include <bits/stdc++.h>
using namespace std;

// PRINTING PATTERN OF STAR
// ****
//  ***
//   **
//    *
void Pattern()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;

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
void Patterntwo(int n){
    for (int row = 0; row < n; row++) {
        // Print spaces
        for (int space = 0; space < row; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 0; star < n - row; star++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
}
// int main() {
//     // Pattern();
//     Patterntwo(4);
//     return 0;
// }

// int main()
// {
//     int n;
//     cout<<"Enter number! ";
//     cin>>n;
//     int i=1;
//     int count = 1;
//     while(i<=n)
//     {
//         // It prints the up side down tringle pattern
//         int j = i;  
//         // int j=1;
//         while (j<=n)
//         {
//             cout<<"*";
//             cout<<count;
//             count = count + 1;            
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }


// printing A B C D E F G H .........
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;
    
//     int row =1;
//     char value = 'A';
//     while (row<=n)
//     {
//         int col=1;
       
//         while (col<=n)
//         {
//             // cout<<char('A'+row-1)<<" ";           
//             // cout<<char('A'+col-1)<<" ";
//             cout<<value<<" ";
//             value = value + 1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
    
// }

// PRINTING TRIGULAR PATTERN OF A B B C C C ......
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     int row =1;
//     while (row<=n)
//     {
//         int col=1;
//         char ch = 'A'+ row - 1;
//         while (col<=row)
//         {
//             cout<<ch<<" ";
//             col= col + 1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
  

// PRINTING TRINGULAR PATTERM OF A B C D E F ....
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     char value = 'A';
//     int row =1;
//     while (row<=n)
//     {
//         int col = 1;
        
//         while (col <= row)

//         {
//             cout<<value;
//             value = value+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row= row +1;
//     }
// }


// PRINTING A , B C , C D E , D E F G .....
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     int row =1;
//     while (row<=n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             char ch = ('A'+row+col-2);
//             cout<<ch;
//             ch = ch+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row= row +1;
//     }
// }

// D , C D , B C D , A B C D .
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     int row =1;
//     while (row<=n)
//     {
//         int col = 1;
//         // char start = 'A' + n - 1;
//         char start = 'A' + n - row;
//         while (col <= row)
//         {
            
//             cout<<start;
//             start = start+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row= row +1;
//     }
// }



// PRINTING PATTERN OF STAR 
//    *
//   **
//  ***
// ****
// int main()
// {
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     int row =1;
//     while (row<=n)
//     {
//         int space = n - row;                
//         while (space)
//         {
//             cout<<" ";
//             space = space - 1;
//         }
//         int col = 1;
//         while (col <= row)
//         {
//             cout<<"*";
//             col = col + 1 ;
//         }
//         cout<<endl;
//         row= row +1;
//     }
// } 


// PRINTING PATTERN OF STAR
// ****
// ***
// **
// *
// int main()
// {
//     int n;cout<<"Enter number";cin>>n;

//     int row =1;
//     while (row<=n)
//     {
//         int col = 1;
//         while (col <= row)
//         {
//             int star = n-row+1;
//             while (col<=star)
//             {
//                 cout<<"*";
//                 col = col + 1 ;
//             }
//         }
//         cout<<endl;
//         row= row +1;
//     }
// } 










