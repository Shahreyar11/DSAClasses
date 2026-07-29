#include <bits/stdc++.h>
using namespace std;

// Recursive function to find the nth Fibonacci number
int fun(int n) {
    unordered_map<int,int> dp;
    if (n == 0 || n == 1)
        return n;

    if (dp.find(n) != dp.end())
        return dp[n];

    int a1 = fun(n-1);
    int a2 = fun(n-2);

    int ans = a1 + a2;
    dp[n] = ans;

    return ans;
}

int main() {
    int terms = 50; // Number of terms to display

    std::cout << "Fibonacci Series up to " << terms << " terms:\n";
    for (int i = 0; i < terms; ++i) {
        std::cout << fun(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}


// Fibonacci using simple loop

int fib(int n) {
    if (n <= 1) return n;

    int prev2 = 0;
    int prev1 = 1;

    for (int i = 2; i <= n; i++) {
        int cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }

    return prev1;
}