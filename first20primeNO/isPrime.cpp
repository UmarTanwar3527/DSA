#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    while (count < 20) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    return 0;
}
