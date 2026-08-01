#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<int,int> dp;
    int tribonacci(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        if(n == 2){
            return 1;
        }
        if(dp.count(n)){
            return dp[n];
        }
        int ans1 = tribonacci(n-1);
        int ans2 = tribonacci(n-2);
        int ans3 = tribonacci(n-3);

        int ans = ans1 + ans2 + ans3;
        dp[n] = ans;
        return ans;
    }
};