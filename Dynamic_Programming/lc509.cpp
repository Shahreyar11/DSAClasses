// Fibonacci Using DP

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int,int> dp;
    int fib(int n) {
        if (n == 0 || n == 1)
            return n;

        if (dp.find(n) != dp.end())
            return dp[n];

        int a1 = fib(n-1);
        int a2 = fib(n-2);

        int ans = a1 + a2;
        dp[n] = ans;

        return ans;
    }
};

// DP Problem
class Solution {
public:
    unordered_map<int,int> dp;
    int fun(int i, int &n){
        if(i == n){
            return 1;
        }
        if(i > n){
            return 0;
        }

        if(dp.find(i) != dp.end()){
            return dp[i];
        }
        int a1 = fun(i+1, n);
        int a2 = fun(i+2, n);
        int ans = a1 + a2;
        dp[i] = ans;
        return ans;
    }
    int climbStairs(int n) {
        int i = 0;
        int res = fun(i,n);
        return res;
    }
};