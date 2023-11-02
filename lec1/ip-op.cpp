// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello World!!!"<<endl;
// }

// BASIC DATA TYPES
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() 
// {
//     int num = 3;
//     long b = 12345678912345;
//     char c = 'a';
//     float d = 334.230;
//     double e = 14049.304930000;
//     // Complete the code.
//     cin>>num>>" ">>b>>" ">>c>>" ">>d>>" ">>e;
//     cout<<("%d %ld %c %f %lf",&num, &b, &c, &d, &e) ;
//     return 0;
// }
// #include <iostream>
// #include <cstdio>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Complete the code.
//     int a; long long b; char c; float d; double e;
//     cin >> a >> b >> c >> d >> e;
//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;
//     cout << fixed << setprecision(3) << d << endl;
//     cout << fixed << setprecision(9) << e << endl;
//     return 0;
// }
// CONDITIONAL STATEMENTS
// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);



// int main()
// {
//     string n_temp;
//     getline(cin, n_temp);
  
  
//     int n = stoi(ltrim(rtrim(n_temp)));
//     cin >> n;
//     // Write your code here
//     if (n==0)
//     {
//         cout<<"zoro";
//     }
//     else if (n==1)
//     {
//         cout<<"one";
//     }
//     else if (n==2)
//     {
//         cout<<"two";
//     }
//     else if (n==3)
//     {
//         cout<<"three";
//     }
//     else if (n==4)
//     {
//         cout<<"four";
//     }
//     else if (n==5)
//     {
//         cout<<"five";
//     }
//     else if (n==6)
//     {
//         cout<<"six";
//     }
//     else if (n==7)
//     {
//         cout<<"seven";
//     }
//     else if (n==8)
//     {
//         cout<<"eight";
//     }
//     else if (n==9)
//     {
//         cout<<"nine";
//     }
//     else
//     {
//         cout<<"Greater than 9";
//     }
    

//     return 0;
// }

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }
// IF ELSE
#include <bits/stdc++.h>

using namespace std;



int main() {
int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

cin >> in;

if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}

return 0;
}

// FOR LOOP
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() 
// {
//     int a, b;
//     string represent[10] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
//     cin >> a >> b;
//     for(int i = a; i <= b; i++) {
       
//         if(i > 9) {
//             if(i % 2 == 0)
//                 cout << "even\n";
//             else cout << "odd\n";
//         }
//         else {
//             cout << represent[i]<<endl;
//         }
//     }
//     return 0;
// }