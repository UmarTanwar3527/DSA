#include<iostream>
using namespace std;

// conditional stetments
// if else loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // int m;
//     cout<<"Enter the the value of A."<<endl;
//     cin>>n;
//     // cout<<"Enter the the value of B."<<endl;
//     // cin>>m;
//     // cout<<"value of a and b is "<<n<<" and "<<m<<"."<<endl;
//     if (n>0){
//         // cout<<"A is greater than B.\n"; 
//         cout<<"Number is Positive" <<endl;
//     }
//     else if(n<0){
//         cout<<"Numder is Negative"<<endl;
//     }
//     else{
//         // cout<<"B is greater than A.\n";
//         cout<<"Number is Equal to ZERO";
//     }
// }

//  HOMEWORK UPPERCASE, LOWERCASE AND NUMERIC
// int main()
// {
//     char ch;
//     cout<<"Pls Input: ";
//     cin>>ch;
    
    
//     if(ch>='a'&&ch<='z')
//     {
//         cout<<"This is smaller case";
//     }
//     else if(ch>='A'&&ch<='Z')
//     {
//         cout<<"This is upper case";
//     }
//     else
//     {
//         cout<<"This is Numeric";
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number";
//     cin>>n;

//     int sum = 0;
//     int i=1;

//     while(i<=n)
//     {
//         if(i%2==0)
//         {
//             sum = sum +i;
//         }
//         i = i +1;
//     }
//     cout<<"The value of sum is "<<sum<<endl;
// }

int main()
{
    // FAHERENHITE TO DEGREE
    float fahrenheit,celsius;
    cout<<"Enter tempreture in faherenhite"<<endl;
    cin>>fahrenheit;
    celsius = ((fahrenheit-32)*5)/9;
    cout<<"Fahrenhite "<<fahrenheit<<endl<<"Celsius "<<celsius;
    return 0;
}

int main()
{
    // DEGREE TO FAHERENHITE
    float fahrenheit,celsius;
    cout<<"Degree to fahrenhite";
    cin>>celsius;
    fahrenheit = (celsius*9/5)+32;
    cout<<"Degree"<<celsius<<endl<<"faherenhite"<<fahrenheit;
}

int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i =2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"not prime for "<< i <<endl;
        }
        else
        {
            cout<<"prime for "<< i << endl;
        }
        i=i+1;
    }
}