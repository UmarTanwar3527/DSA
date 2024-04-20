#include <iostream>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 10; // Change this to the desired Fibonacci number you want to find
    int result = fibonacci(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;
    return 0;
}
