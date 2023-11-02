#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//     1
//    12
//   1 3
//  1  4
// 12345
// int main(int n){
//     for(int row = 1;row<=n;row++){
//         int space = n - row;
//         for(int row = 1;row<0;row++){
//             cout<<space;
//         }
//         for(int row =)
//     }



//     return 0;
// }

#include <iostream>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }

        // Print the numbers or spaces
        for (int j = 1; j <= i; j++) {
            if (i == 3 || i == 4) {
                if (j == 2 || j == 3) {
                    std::cout << " ";
                } else {
                    std::cout << j;
                }
            } else {
                std::cout << j;
            }
        }

        // Print spaces for alignment in the second half of each row
        for (int j = i - 1; j >= 1; j--) {
            std::cout << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
