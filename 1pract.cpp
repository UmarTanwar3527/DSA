#include <iostream>
using namespace std;
// pattern 
// 1
// 1 1
// 1 1 1
// 1 1 1 1 ..........
int main(){
    int numLines;

    cout << "Enter the number of lines: ";
    cin >> numLines;

    for (int i = 1; i <= numLines; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "1 ";
        }
        cout << endl;
    }

    return 0;
}