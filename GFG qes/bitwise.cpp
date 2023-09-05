
#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);





void bitWiseOperation(int a, int b, int c) {
    int d = a^a;
    cout<<d<<endl;
    int e=c^b;
    cout<<e<<endl;
    int f=a&b;
    cout<<f<<endl;
    int g=c|(a^a);
    cout<<g<<endl;
    int h=~e;
    cout<<h<<endl;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}