#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a ,b;

    cout<<"Enter the First No."<<endl;
    cin>>a;

    char opr;
    cout<<"Enter the Operation +,-,*,/,% "<<endl;
    cin>>opr;

    cout<<"Enetr the Second No."<<endl;
    cin>>b;

    switch (opr)
    {
    case '+':
        cout<<a + b;
        break;

    case '-':
        cout<<a - b;
        break;

    case '*':
        cout<<a * b;
        break;

    case '/':
        cout<<a / b;
        break;

    case '%':
        cout<<a % b;
        break;

    default:
        cout<<"You Entered Wrong Combination";
        break;
    }
    return 0;
}