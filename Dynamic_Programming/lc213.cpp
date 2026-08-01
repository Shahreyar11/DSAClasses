
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fun(vector<int> &nums, int n, int i, int free, vector<vector<int>> &dp){
        if(i == n){
            return 0;
        }
        if(free == 0){
            return fun(nums,n,i+1,1, dp);
        }
        if(dp[i][free] != -1){
            return dp[i][free];
        }
        int c1 = nums[i] + fun(nums,n,i+1,0, dp);
        int c2 = fun(nums,n,i+1,1, dp);
        int ans = max(c1,c2);
        dp[i][free] = ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int free = 1;
        vector<vector<int>> dp1(n, vector<int>(2,-1));
        vector<vector<int>> dp2(n, vector<int>(2,-1));
        int ans1 = fun(nums,n-1,0,free, dp1);
        int ans2 = fun(nums, n, 1, free, dp2);
        return max(ans1,ans2);       
    }
};