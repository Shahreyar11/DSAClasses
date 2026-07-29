#include <iostream>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base case: return n if it is 0 or 1
    if (n <= 1) {
        return n;
    }
    // Recursive step
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms = 10; // Number of terms to display

    std::cout << "Fibonacci Series up to " << terms << " terms:\n";
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
