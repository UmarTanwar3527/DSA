/*
I have also been a part of
Indian Space Research Organisation (ISRO) ,
CodeChef (an initiative of Directi),
bitgrit Inc, Tokyo Japan in my Internships
*/

//  SWITCH STATEMENT AND FUNCTIONS

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     char ch = '1';
//     int num = 1;

//     switch (ch){

//     case 1: cout << "First number" << endl;
//             cout << "Again first number" << endl;
//             break;
//     case '1': cout <<"first character" << endl;

//                 switch (num){
//                 case 1: cout << "number in character - Nested Switch"<<endl;
//                     break;
//                 }
//             break;
//     default: cout << "This is a default case" <<endl;
//         break;
//     }
//     cout<<"outside of switch"<<endl;

//     return 0;
// }

// MINI CALCULATOR
// int main(){
//     int a , b;

//     cout <<"enter the first number"<<endl;
//     cin>>a;

//     char ch;
//     cout<<"enter a operation"<<endl;
//     cin >> ch;

//     cout <<"enter the second number"<<endl;
//     cin>>b;

//     switch (ch)
//     {
//     case '+': cout<< (a+b)<<endl;
//         break;

//     case '-': cout<< (a-b)<<endl;
//         break;

//     case '*': cout<< (a*b)<<endl;
//         break;

//     case '/': cout<< (a/b)<<endl;
//         break;

//     case '%': cout<< (a%b)<<endl;
//         break;

//     default: cout<<"enter a valid operation";
//         break;
//     }
// }


// HOW MUCH NOTES IS REQUIRED IN 100, 50, 20, 1
// int main()
// {

//     int amount;
//     cout << "Enter the amount" << endl;
//     cin >> amount;

//     int Rs100, Rs50, Rs20, Rs1;

//     switch (1)
//     {
//     case 1:
//         Rs100 = amount / 100;
//         amount = amount % 100;
//         cout << "No of 100 Rupee notes required are=" << Rs100 << endl;

//     case 2:
//         Rs50 = amount / 50;
//         amount = amount % 50;
//         cout << "No of 50 Rupee notes required are=" << Rs50 << endl;

//     case 3:
//         Rs20 = amount / 20;
//         amount = amount % 20;
//         cout << "No of 20 Rupee notes required are=" << Rs20 << endl;

//     case 4:
//         Rs1 = amount / 1;
//         amount = amount % 1;
//         cout << "No of 1 Rupee notes required are=" << Rs1 << endl;
//     }
// }


int power(){
    int a , b;
    cin >> a >> b ;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main (){

    int answer = power(); 
    cout << "Answer is: "<<answer;
    
    answer = power(); 
    cout << "Answer is: "<<answer;
    return 0;    
}